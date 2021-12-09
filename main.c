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
#include "matrisoperations.c"


int main(int argc, char const *argv[])
{   
    int **A;
    int **B;
    int boyut1,boyut2,islemtTpi;
    puts("1. Matrisin boyutunu giriniz: ");
    scanf("%d",&boyut1);
    puts("2. Matrisin boyutunu giriniz: ");
    scanf("%d",&boyut2);
    puts("[0]Basit Carpma \n [1]Karmasik Carpma");
    puts("islem seciniz: ");
    scanf("%d",&islemtTpi);
    
    puts("***************");
    A = matrisOlustur(boyut1);
    randomMatrisDoldur(A,boyut1);
    matrisYazdir(A,boyut1);

    puts("***************");

    B = matrisOlustur(boyut2);
    randomMatrisDoldur(B,boyut2);
    matrisYazdir(B,boyut2);

    puts("***************");

    int **C = operasyon1(A,B,boyut1,boyut2,islemtTpi);
    matrisYazdir(C,matrisBoyutBulucu(boyut1,boyut2,islemtTpi));
    return 0;
}
