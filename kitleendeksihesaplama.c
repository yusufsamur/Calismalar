#include <stdio.h>

int main(){

// VÜCUT KİTLE ENDEKSİ HESAPLAMA
// Vücut Kitle İndeksi (VKİ) = Vücut Ağırlığı (kg) / Boy Uzunluğunun Karesi (m2)

float boy, kilo, indeks,altsinir,ustsinir;

printf("Kilonuzu Giriniz: ");
scanf("%f",&kilo);

printf("Boyunuzu Giriniz: ");
scanf("%f",&boy);

indeks=kilo/(boy*boy);

printf("indeksiniz: %f\n", indeks);

if(indeks<18.49){

printf("Kilonuz Ideal Kilonuzun Altindadir.");

 }
else if(indeks<25){

printf("Kilonuz Idealdir.");

}
else if(indeks<30){

printf("Kilonuz Ideal Kilonuzun Ustundedir.");


}
else{

    printf("Kilonuz Ideal Kilonuzun Cok Ustundedir.");
}

    return 0;
 }