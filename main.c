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
#include "mo.c"

int main(int argc, char const *argv[])
{
    
    int **A;
    A = matrisOlustur(5);
    randomMatrisOlustur(A,5);
    matrisYazdirXXX(A,5);
    /*
    int **a;
    a=matrisOlustur(5);
    int **b;
    b=matrisOlustur(3);
    randomMatrisDoldur(a,5,5);
    randomMatrisDoldur(b,3,3);

    matrisYazdir(A,5,5);
    matrisYazdir(b,3,3);
    
    
    
    int **cikti = operasyon1(a,b,5,3);
    
    matrisYazdir(cikti,3,3);
    */
    return 0;
}
