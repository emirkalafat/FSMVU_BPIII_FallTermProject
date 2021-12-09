/*
* @file main.c
* @description executes main program functions
* @assignment First Misson
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrisoperations.h"


int main(int argc, char const *argv[])
{   
    int **A;
    int **B;
    int boyut1,boyut2,islemtTpi;
    puts("1. Matrisin boyutunu giriniz [5][7][11]: ");
    scanf("%d",&boyut1);
    puts("2. Matrisin boyutunu giriniz [3][5][7]: ");
    scanf("%d",&boyut2);
    puts("[0]Basit Carpma \n[1]Karmasik Carpma");
    puts("islem seciniz: ");
    scanf("%d",&islemtTpi);
    int denetim=programButunlulukSaglamasi(boyut1,boyut2);
    if (denetim==0)
    {
        puts("Hatali Deger Girisi....\nProgramdan Cikiliyor");
        return EXIT_FAILURE;
    }
    
    
    
    //puts("***************");
    A = matrisOlustur(boyut1);//verilen boyutta matris için bellekte alan ayrılması
    matrisRandomDoldur(A,boyut1);//oluşturulan matrisin rastgele sayılar ile doldurulması
    matrisYazdir(A,boyut1);//matrisin yazdırılması

    //puts("***************");

    B = matrisOlustur(boyut2);
    matrisRandomDoldur(B,boyut2);
    matrisYazdir(B,boyut2);

    //puts("***************");

    int **C = operasyon1(A,B,boyut1,boyut2,islemtTpi);
    matrisYazdir(C,matrisBoyutBulucu(boyut1,boyut2,islemtTpi));

    puts("***************");

    return EXIT_SUCCESS;
}
