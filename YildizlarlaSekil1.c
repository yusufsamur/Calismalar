#include <stdio.h>

int main(){

int a,b,satir;

printf("Satir Sayisini Giriniz: ");
scanf("%d",&satir);

for(a=1;a<=satir;++a){

for(b=1;b<=a;++b){

printf("*");


}

printf("\n");

}

    return 0;
}