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
void randomMatrisDoldur(int **matris,int boyut){
    srand(time(NULL));
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            //srand(time(NULL));
            matris[i][j]=rand()%10;
        }
    }
}
void matrisBirDoldur(int **matris,int boyut){
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            matris[i][j]=1;
        }
    }
}
void matrisYazdir(int **matris,int boyut){
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
}
int matrisBoyutBulucu(int matris1Boyut, int matris2Boyut, int islemTipi){
    return ((matris1Boyut-matris2Boyut)+(2*islemTipi)+1);
}

int **operasyon1(int **matris1,int **matris2, int boyut1, int boyut2,int islemTipi){
    if (islemTipi==0)
    {
        
    int YB=matrisBoyutBulucu(boyut1,boyut2,islemTipi);
    int sum = 0;
    int count =1;
    int count2 =0;
    int i=0,j=0;
    int **yeniMatris;
    yeniMatris = matrisOlustur(YB);
    for (size_t m = 0; m < YB; m++)
    {
        for (size_t n = 0; n < YB; n++)
        {
            for (;count <= boyut2;)
            {
                for (i = 0+m; i < boyut2+m; i++)
                {
                    for (j = 0+n; j < boyut2+n; j++)
                    {
                        sum += matris1[i][j+count2] * matris2[i-m][j-n+count2];
                    }
                    count++;
                }
                count2++;
            }
            count=1;
            i=0;
            j=0;
            yeniMatris[m][n]=sum;
            sum=0;
            count2=0;
        }
        
    }
    return yeniMatris;
    }
    
    
    

    
    return 1;
    
}

