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
int **matrisOlustur(int matrisBoyutu){
    int **matris = malloc(matrisBoyutu*sizeof(int *));
    for (int i = 0; i < matrisBoyutu; i++)
    {
        matris[i]=malloc(matrisBoyutu*sizeof(int));
    }
    
    return matris;
}
void randomMatrisDoldur(int **matris,int satir, int sutun){
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            srand(time(NULL));
            matris[i][j]=1+rand()%10;
            
        }
    }
}
void matrisBirDoldur(int **matris,int satir, int sutun){
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            matris[i][j]=1;
        }
    }
}
void matrisYazdir(int **matris,int satir, int sutun){
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("%d\t",*(*matris+i)+j);
        }
        printf("");
    }
}

int **operasyon1(int **matris1,int **matris2, int boyut1, int boyut2){
    
    int sum = 0;
    int count2 =0;
    int **yeniMatris;
    yeniMatris = matrisOlustur(boyut2);
    for (int count = 0; count < boyut2 ; count++)
    {
        for (int i = 0; i < boyut2; i++)
        {
            for (int j = 0; j < boyut2; j++)
            {
                sum+= matris1[i][j+count2] * matris2[i][j+count2];
            }
            
        }
        count2++;
    }
    yeniMatris[0][0]=sum;
    sum=0;
    
    return yeniMatris;
}

