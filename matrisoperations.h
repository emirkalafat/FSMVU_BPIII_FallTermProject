/*
 * @file matrisoperations.h
 * @description operations with matrices matrisoperations.h file
 * @assignment Computer Engineering III Fallterm Project I
 * @date 1.12.2021
 * @author Ahmet Emir Kalafat ahmetemir.kalafat@stu.fsm.edu.tr
 */
#ifndef _MATRISOPERATIONS_
#define _MATRISOPERATIONS_

int **matrisOlustur(int diziBoyutu);
void matrisRandomDoldur(int **dizi, int satir, int seed);
void matrisOzelDoldur(int **dizi, int boyut, int doldurulacakSayi);
void matrisTemizle(int **matris, int boyut);
void matrisYazdir(int **dizi, int boyut, int tabDegiskeni);
int matrisBoyutBulucu(int matris1Boyut, int matris2Boyut, int islemTipi);
int **operasyon1(int **matris1, int **matris2, int boyut1, int boyut, int islemTipi);
int **ikiMatrisKontrol(int **matris1, int **matris2, int boyut1, int boyut2, int islemTipi);
int **matrisBuyutucu(int **matris, int boyut);
int programButunlulukSaglamasi(int boyut1, int boyut2);

#endif