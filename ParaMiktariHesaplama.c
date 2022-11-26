#include <stdio.h>

int main(){

float onparasayisi, yuzparasayisi, onkurussayisi, yirmibeskurussayisi,toplamkurus, kurus;
int lira;

printf("Elinizdeki 10 para miktarini giriniz: ");
scanf("%f",&onparasayisi);

printf("Elinizdeki 100 para miktarini giriniz : ");
scanf("%f",&yuzparasayisi);

printf("Elinizdeki 10 kurus miktarini giriniz: ");
scanf("%f",&onkurussayisi);

printf("Elinizdeki 25 kurus miktarini giriniz: ");
scanf("%f",&yirmibeskurussayisi);

toplamkurus= onparasayisi*0.25 + yuzparasayisi*2.5 + onkurussayisi*10 + yirmibeskurussayisi*25;

lira= toplamkurus/100;

kurus= toplamkurus - lira*100;

printf("%d lira, %f kurus.", lira, kurus);






    return 0;
}