#include <stdio.h>

int main(){


int saat2, dakika2,saniye2;
long saat,dakika,saniye;
long ekleneceksure;
long toplamsure;
printf("Zamani Giriniz(Saat,Dakika,Saniye):\n ");
scanf("%d",&saat);
scanf("%d",&dakika);
scanf("%d",&saniye);

printf("Eklenecek sureyi giriniz(saniye): ");
scanf("%d",&ekleneceksure);

toplamsure=saat*3600+ dakika*60 + saniye;

toplamsure+= ekleneceksure;

saat2= toplamsure/3600;

saniye2= toplamsure%60;

dakika2= (toplamsure%3600)/60       ;

printf("Yeni zaman: %d  %d  %d",saat2,dakika2,saniye2);

}


