#include <stdio.h>

int main(){

float Puan, Agno, YabanciDil, AlesPuani;


printf("Ales Puaninizi Giriniz: ");
scanf("%f",& AlesPuani);

printf("Yabanci Dil Puaninizi Giriniz: ");
scanf("%f",& YabanciDil);

printf("AGNO Giriniz: ");
scanf("%f",&Agno);

Puan= 0.5*AlesPuani + 0.25*YabanciDil + 0.25*Agno;

printf("Ales Puaniniz: %f\n", Puan);

if(Puan>=60){

printf("Siralamaya Girebilirsiniz !");

}
else{

    printf("Siralamaya Giremezsiniz !");
}


    return 0;
}