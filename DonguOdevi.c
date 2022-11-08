#include <stdio.h>

int main(){

int k=1;
float sonuc = 0.0;
int n;

printf("Bir n sayisi giriniz:");
scanf("%d", &n);

while(k<=n){
sonuc=((k+1.0)/k) + sonuc;
k++;
}
printf("Sonuc: %f", sonuc);



return 0;

    
}