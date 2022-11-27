#include <stdio.h>

int main(){

int sayi,birler,onlar,yuzler,binler,onbinler;


printf("5 basamakli bir sayi giriniz: ");//12312
scanf("%d",&sayi);

birler=sayi%10;
onbinler=sayi/10000;
onlar=(sayi%100)/10;
yuzler=(sayi%1000)/100;
binler=(sayi%10000)/1000;

printf("\n");

if(birler==onbinler && onlar==binler)
{
printf("sayi palindromdur.");
}
else
{
    printf("sayi palindrom degildir.");
}
    return 0;
}