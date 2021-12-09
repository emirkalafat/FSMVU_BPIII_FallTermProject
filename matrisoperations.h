/*
* @file matrisoperations.h
* @description ///"güncellenecek"executes main program functions///
* @assignment First Misson
* @date 1.12.2021
* @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
*/
#ifndef _MATRISOPERATIONS_
#define _MATRISOPERATIONS_

int **matrisOlustur(int diziBoyutu);
void randomMatrisDoldur(int **dizi,int satir);
void matrisBirDoldur(int **dizi,int boyut);
void matrisYazdir(int **dizi,int boyut);
int matrisBoyutBulucu(int matris1Boyut, int matris2Boyut, int islemTipi);
int **operasyon1(int **matris1,int **matris2, int boyut1, int boyut,int islemTipi);

#endif