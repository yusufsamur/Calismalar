#include <stdio.h>

int main(){

float yas,boy,kilo,KitleIndeksi;

printf("Yasinizi Giriniz: ");
scanf("%f",& yas);

printf("Boyunuzu Giriniz: ");// Metre Cinsinden
scanf("%f",&boy);

printf("Kilonuzu Giriniz: ");// Kilogram Cinsinden
scanf("%f",& kilo);

KitleIndeksi = kilo/(boy*boy);

printf("Kitle Indeksiniz: %f\n", KitleIndeksi);

if(yas<13){

printf("Yasiniz 13'ten kucuk oldugu icin Askeri Liseye kabul edilmediniz.");

}
else if(yas<=17){

if(KitleIndeksi<18.5){

printf("Kitle Indeksiniz 18.5'ten kucuk oldugu icin Askeri Liseye kabul edilmediniz.");



}
else if(KitleIndeksi<=24.99){

printf("Tebrikler! Askeri Liseye kabul edildiniz.");


}
else{

printf("Kitle Indeksiniz 24.99'tan buyuk oldugu icin Askeri Liseye kabul edilmediniz.");


}



}else{

printf("Yasiniz 17'den buyuk oldugu icin Askeri Liseye kabul edilmediniz.");


}

    return 0;
}