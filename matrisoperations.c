/*
* @file matrisoperations.c
* @description ///"güncellenecek"executes main program functions///
* @assignment First Misson
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "matrisoperations.h"
int **matrisOlustur(int diziBoyutu){
    int **dizi = malloc(diziBoyutu*sizeof(int *));
    for (size_t i = 0; i < diziBoyutu; i++)
    {
        dizi[i]=malloc(diziBoyutu*sizeof(int));
    }
    
    return dizi;
}
void randomMatrisDoldur(int** dizi,int diziBoyutu){
    for (size_t i = 0; i < diziBoyutu; i++)
    {
        for (size_t j = 0; j < diziBoyutu; j++)
        {
            srand(time(NULL));
            dizi[i][j]=(int)rand()%10;
        }
    }
}
void matrisDoldur(int **dizi,int diziBoyutu){
    for (size_t i = 0; i < diziBoyutu; i++)
    {
        for (size_t j = 0; j < diziBoyutu; j++)
        {
            dizi[i][j]=1;
        }
    }
}
void matrisYazdir(int **dizi,int diziBoyutu){
    for (size_t i = 0; i < diziBoyutu; i++)
    {
        for (size_t j = 0; j < diziBoyutu; j++)
        {
            printf("%d",dizi[i][j]);
        }
        puts("");
    }
}
/*
int **operasyon1(int **dizi1,int **dizi2, int diziBoyutu){

    return 0;
}
*/
