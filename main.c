/*
* @file main.c
* @description operations with matrices main.c file
* @assignment Computer Engineering III Fallterm Project I
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrisoperations.h"

int main(int argc, char const *argv[])
{   
    int boyut1,boyut2,islemtTpi,randSeed;
    int **A;
    int **B;
    int **C;

    if(argc==1){
        randSeed=0;
        puts("Ozel baslangic argumani belirtilmedi. Devam ediliyor.");
        /////////////
        printf("1. Matrisin boyutunu giriniz [5][7][11]: ");
        scanf("%d",&boyut1);
        printf("2. Matrisin boyutunu giriniz [3][5][7]: ");
        scanf("%d",&boyut2);
        /////////////
        puts("[0]Senaryo 1 \n[1]Senaryo 2");
        printf("islem seciniz: ");
        scanf("%d",&islemtTpi);
    }
    else if(argc==5){
        boyut1=atoi(argv[1]);
        printf("1. Matrisin boyutu %d x %d olarak ayarlandi.\n",boyut1,boyut1);
        boyut2=atoi(argv[2]);
        printf("2. Matrisin boyutu %d x %d olarak ayarlandi.\n",boyut2,boyut2);
        islemtTpi=atoi(argv[3]);
        printf("Islem tipi [%d] secildi.\n",islemtTpi);
        randSeed=atoi(argv[4]);
        printf("rand fonksiyonu seed'i %d olarak belirlendi.\n",randSeed);
    }
    else{
        puts("Eksik ya da yanlis arguman girisi...\nProgramdan Cikiliyor.");
        return EXIT_FAILURE;
    }

    //int denetim=programButunlulukSaglamasi(boyut1,boyut2);
    if (programButunlulukSaglamasi(boyut1,boyut2)==0)//istenmeyen kullanıcı girişleri için denetim
    {
        puts("Hatali Deger Girisi....\nProgramdan Cikiliyor");
        free(A);
        free(B);
        free(C);
        return EXIT_FAILURE;
    }

    A = matrisOlustur(boyut1);//verilen boyutta matris için bellekte alan ayrılması
    matrisRandomDoldur(A,boyut1,randSeed);//oluşturulan matrisin rastgele sayılar ile doldurulması
    matrisYazdir(A,boyut1,0);//matrisin yazdırılması
    
    B = matrisOlustur(boyut2);
    matrisRandomDoldur(B,boyut2,randSeed);
    matrisYazdir(B,boyut2,0);

    C = operasyon1(A,B,boyut1,boyut2,islemtTpi);
    matrisYazdir(C,matrisBoyutBulucu(boyut1,boyut2,islemtTpi),1);

    puts("***************");
    free(A);
    free(B);
    free(C);
    return EXIT_SUCCESS;
}