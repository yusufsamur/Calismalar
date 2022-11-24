#include <stdio.h>
float ortalamaveHarfNotuHesapla(float vize, float final){

float ort=vize*0.6 + final*0.4;



    return ort;
}



int main(){
float vize,final;
do
{


printf("Vize Notununzu Giriniz: ");
scanf("%f",&vize);

printf("Final Notunuzu Giriniz ");
scanf("%f",&final);

float ortalama=ortalamaveHarfNotuHesapla(vize,final);
printf("Ortalamaniz: %f\n",ortalama);

if(ortalama<=100.0 && ortalama>=75.0)
{
printf("Harf notunuz: AA\n");
}
else if(ortalama<75.0 && ortalama>=50.0)
{
printf("Harf notunuz: BA\n");
}
else if(ortalama<50.0 && ortalama>=25.0)
{
printf("Harf nnotunuz: BB\n");
}
else if(ortalama<25.0 && ortalama>=0.0)
{
printf("Harf notunuz: FF\n");
}

}while(vize!=111 || final!=111);







return 0;




}