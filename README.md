# FSMVU BPIII FallTermProject

Bu projede, iki boyutlu matrisler üzerinde aşağıda detayları anlatılan 
işlemleri gerçekleştiren C programının yazılması beklenmektedir.
Dikkat Edilmesi Gerekenler:
* Parametre olarak gönderilen veya geriye döndürülen iki boyutlu 
matrisler dinamik olarak heap’te tutulmalıdır.
* main fonksiyonda herhangi bir hesaplama yapılmayacaktır, tüm matris 
hesaplamaları için bir adet matris kütüphanesi yazılmalıdır,
* Matris işlemleri matrisoperations.h ve matrisoperations.c dosyalarında 
yapılmalıdır
* matrisoperations.h kütüphane dosyasında fonksiyonların sadece 
prototipleri bulunmalıdır,
* main fonksiyonda sadece orijinal matrisler tanımlanmalı ve işlemler 
ilgili kütüphanede tanımlanan fonksiyonlar ile yapılmalıdır, matrisler 
elle veya random olarak doldurulabilir,
* Program sonlandığında çöp bellek alanları oluşmamalıdır ve allocation 
yapılan alanla iade edilmelidir,
* Program tüm girdilere karşı robust olarak cevap vermeli, runtime error 
oluşmaması için gerekli kontroller programcı tarafından yapılmalıdır.
* Boyut aşma problemlerini aşmak için şu kurallara uygun matrislerin 
kullanılması önerilir;
    * Projenin teslim edilmesi aşamasında, bir adet Makefile hazılanmalıdır, 
    * Matris1 boyutları tek değerlerden oluşmalıdır (5x5, 7x7, 11x11 gibi)
    * Matris2 boyutları tek değerlerden oluşmalıdır (3x3, 5x5 gibi)
    * Matris2 boyutları sadece 3x3 ve 5x5 değerler için test edilmelidir.
* Senaryolar örnek olarak verilmiştir. Farklı girdi ve parametreler için çalışan C kodu yazılmalıdır.
 
## İşlem Örnekleri:
> Senaryo1
> ![Örnek1](./Example1.png)

> Senaryo2
> ![Örnek2](./Example2.png)

