#include <stdio.h>

int main(){

// ***********YGS PUANİ HESAPLAMA*************


// TÜRKCE: 1.999
// MATEMATİK: 3.998
// SOSYAL BİLGİLER: 1
// FEN BİLGİSİ 2.999
// TABAN: 100.160

float tNet, mNet, sNet, fNet, taban, puan;
taban=100.160;

printf("Turkce Netinizi Giriniz: ");
scanf("%f",&tNet);

printf("Matematik Netinizi Giriniz: ");
scanf("%f",&mNet);

printf("Sosyal Netinizi Giriniz: ");
scanf("%f",&sNet);

printf("Fen Netinizi Giriniz: ");
scanf("%f",&fNet);

puan=tNet*1.999+mNet*3.998+sNet*1+fNet*2.999+taban;

printf("Toplam Puaniniz: %f",puan);





    return 0;
}