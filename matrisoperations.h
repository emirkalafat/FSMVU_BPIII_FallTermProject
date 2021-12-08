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
void randomMatrisDoldur(int **dizi,int satir, int sutun);
void matrisBirDoldur(int **dizi,int satir, int sutun);
void matrisYazdir(int **dizi,int satir, int sutun);
int **operasyon1(int **matris1,int **matris2, int boyut1, int boyut2);

#endif