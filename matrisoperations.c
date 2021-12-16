/*
* @file matrisoperations.c
* @description operations with matrices matrisoperations.c file
* @assignment Computer Engineering III Fallterm Project I
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "matrisoperations.h"

int **matrisOlustur(int matrisBoyutu){
    //bu fonksiyon heap alanında matris için uygun boyutta yer ayırıp sışarı yolluyor.
    int **matris = malloc(matrisBoyutu*sizeof(int *));
    for (int i = 0; i < matrisBoyutu; i++)
    {
        matris[i]=malloc(matrisBoyutu*sizeof(int));
    }
    return matris;
}
void matrisRandomDoldur(int **matris,int boyut){
    srand(time(NULL));
    puts("Rastgele sayi araligi belirleyiniz.(belirtilen sayilar dahil edilecektir)");
    int baslangic,bitis;
    printf("baslangic degeri: ");
    scanf("%d",&baslangic);
    printf("bitis degeri: ");
    scanf("%d",&bitis);
    //bu fonksiyon belirtilen başlangıç ve bitiş değerleri arasında rastgele sayılar ile verilen matrisi doldurmaya yarıyor.
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            //srand(time(NULL));
            matris[i][j]=baslangic + rand()%(bitis-baslangic+1);
        }
    }
}
void matrisOzelDoldur(int **matris,int boyut,int doldurulacakSayi){
    //bu fonksiyon oluşturulan matrisin istenilen sayı ile doldurulmasını sağlıyor
    //test aşamasında işimi gören bir yöntem
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            matris[i][j]=doldurulacakSayi;
        }
    }
}
void matrisYazdir(int **matris,int boyut,int tabDegiskeni){
    //bu fonksiyon verilen matrisin elemanlarını düzün sırada yazdırmayı sağlıyor.
    puts("*************************");
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            if (tabDegiskeni==0)
                printf("%d ",matris[i][j]);//eğer matrisin değerleri çok büyük değilse tabDegiskeni değerini 0 yaparak sayıları birbirine yakın yazdırır
            else
                printf("%d\t",matris[i][j]);//eğer matrisin değerleri çok büyükse tabDegiskeni değerini 1 yaparak sayıları birbirine uzak yazdırır
        }
        puts("");
    }
}
int matrisBoyutBulucu(int matris1Boyut, int matris2Boyut, int islemTipi){
    //operasyon için matrisin boyutunu hesaplayan fonksiyon
    return ((matris1Boyut-matris2Boyut)+(2*islemTipi)+1);
}
int **matrisBuyutucu(int **matris,int boyut)
{
    //verilen matrisin etrafını 0 ile doldurmaya yarayan fonksiyon.
    int **ciktiMatrisi=matrisOlustur(boyut+2);
    matrisOzelDoldur(ciktiMatrisi,boyut+2,0);
    for (size_t i = 1; i < boyut+1; i++)
    {
        for (size_t j = 1; j < boyut+1; j++)
        {
            ciktiMatrisi[i][j]=matris[i-1][j-1];
        }   
    }
    puts("*******Buyutulen Matris********");
    matrisYazdir(ciktiMatrisi,boyut+2,0);
    puts("*************");
    return ciktiMatrisi;
}
int **ikiMatrisKontrol(int **matris1,int **matris2, int boyut1, int boyut2,int islemTipi){
    //
    int YB;
    /*fonksiyon, büyütülen matrisin boyutunu değişken 
    olarak aldığı için çıktı matrisinin 
    boyutunu belirlemeye yönelik if kontrolü*/
    if (islemTipi==0)
        YB=matrisBoyutBulucu(boyut1,boyut2,islemTipi);
    else
        YB=matrisBoyutBulucu(boyut1-2,boyut2,islemTipi);
    //
    int **yeniMatris;
    yeniMatris = matrisOlustur(YB);
    int sum = 0;
    int sayac =1;
    int sayac2 =0;
    int i=0,j=0;
    
    for (size_t m = 0; m < YB; m++)
    {
        for (size_t n = 0; n < YB; n++)
        {
            for (;sayac <= boyut2;)
            {
                for (i = 0+m; i < boyut2+m; i++)
                {
                    for (j = 0+n; j < boyut2+n; j++)
                    {
                        sum += matris1[i][j+sayac2] * matris2[i-m][j-n+sayac2];
                    }
                    sayac++;
                }
                sayac2++;
            }
            sayac=1;
            i=0;
            j=0;
            yeniMatris[m][n]=sum;
            sum=0;
            sayac2=0;
        }
        
    }
    return yeniMatris;
}
int **operasyon1(int **matris1,int **matris2, int boyut1, int boyut2,int islemTipi){
    
    int **ciktiMatrisi;
    /*farklı işlem tipleri için aynı değerlendirmeyi 
    yapmamız gerektiğinden dolayı yapılan karşılaştırma işlemini 
    farklı bir fonksiyon içine alarak işlem tipinin dışarıdan kontol 
    edilip işlemi tekrardan kurtarmak için if kontrolü*/
    if (islemTipi==0)
    {
        ciktiMatrisi=ikiMatrisKontrol(matris1,matris2,boyut1,boyut2,islemTipi);
    }
    else if(islemTipi==1){
        int buyutulenBoyut = boyut1+2;
        ciktiMatrisi=ikiMatrisKontrol(matrisBuyutucu(matris1,boyut1),matris2,buyutulenBoyut,boyut2,islemTipi);
    }
    else
        puts("Hatali islem secimi....\nCikiliyor.");
    

    return ciktiMatrisi;
    
}
int programButunlulukSaglamasi(int boyut1,int boyut2){
    //girilen matris boyutlarının tek sayı olup olmadığı ve büyüklük küçüklük durumlarının kontrolünün sağlandığı fonksiyon. 
    if (boyut1%2==1&&boyut2%2==1&&boyut1>=5&&boyut2>=3)
    {
        if (boyut1>boyut2)
            return 1;
    }
    return 0;
}


