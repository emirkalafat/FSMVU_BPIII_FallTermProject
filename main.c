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
#define BOYUT 5

int main(int argc, char const *argv[])
{
    int **a=matrisOlustur(BOYUT);
    
    matrisDoldur(a,BOYUT);
    matrisYazdir(a,BOYUT);
    
    return 0;
}
