#include <stdio.h>

int main(){

char aractipi;
int gun, mesafe;
float tutar;
printf(" (A veya a) Arazi\n (B veya b) Binek\n (S veya s) Station\n (P veya p) Spor\n");
printf(" Aracinizin Turunu Giriniz: ");
scanf("%c",&aractipi);

printf(" Araci Kac Gun Kullandiniz ?");
scanf("%d",&gun);

printf(" Arac Ile Kac Km Yol Yaptiniz ?");
scanf("%d",& mesafe);

switch (aractipi)
{
case 'A': 
case 'a': tutar= gun*20 + mesafe*18;
break;
case 'B': 
case 'b': tutar= gun* 32 + mesafe*22;
break;
case 'S': 
case 's': tutar= gun*43 + mesafe*28;
break;
case 'P': 
case 'p': tutar= gun*51 + mesafe*36;
break;

default: printf(" Yanlis Arac Turu Sectiniz !\n");
}

printf(" Odemeniz Gereken Tutar: %.2f TL", tutar);

    return 0;
}
