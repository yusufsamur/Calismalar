#include <stdio.h>

int main(){

   int marka;
   int tutar;
   int sayiR=0, sayiM=0, sayiH=0, sayiF=0;
   int tutarR=0, tutarM=0, tutarH=0, tutarF=0;

   do
   {
   printf(" Renault: 1\n Mazda: 2\n Honda: 3\n Ford: 4\n");
   printf("Arac Markasini Giriniz: ");
   scanf("%d",&marka);
   printf("Aracin Benzin Tutarini Giriniz: ");
   scanf("%d",& tutar);

   printf("\n");

   switch (marka)
   {
   case 1: sayiR=sayiR+1;
           tutarR=tutarR+ tutar;
           break;
   case 2: sayiM=sayiM+1;
           tutarM=tutarM+tutar;
           break;
   case 3: sayiH=sayiH+1;
           tutarH=tutarH+tutar;
           break;
   case 4: sayiF=sayiF+1;
           tutarF=tutarF+tutar;
           break;                   
   }
   } while (marka!=111);
   
   if (sayiR>sayiM || sayiR>sayiH || sayiR>sayiF)
   {
    printf("Istasyona en cok gelen arac turu: Renault\n Gelis Sayisi: %d",sayiR);
   }
   else if(sayiM>sayiR || sayiM>sayiH || sayiM>sayiF)
   {
    printf("Istasyona en cok gelen arac turu: Mazda\n Gelis Sayisi: %d", sayiM);
   }
   else if(sayiH > sayiR || sayiH>sayiM || sayiH>sayiF)
   {
    printf("Istasyona en cok gelen arac turu: Honda\n Gelis Sayisi: %d", sayiH);
   }
   else
   {
    printf("Istasyona en cok gelen arac turu: Ford\n Gelis Sayisi: %d", sayiF);
   }
   
   printf("\n");

   if (tutarR>tutarM && tutarR>tutarH && tutarR>tutarF)
   {
    printf("En cok satis yapilan arac turu: Renault\n (%d TL)",tutarR);
   }
   else if(tutarM>tutarR && tutarM>tutarH && tutarM>tutarF)
   {
    printf("En cok satis yapilan arac turu: Mazda\n (%d TL)", tutarM);
   }
   else if(tutarH>tutarR && tutarH>tutarM && tutarH>tutarF)
   {
    printf("En cok satis yapilan arac turu: Honda\n (%d TL)", tutarH);
   }
   else
   {
    printf("En cok satis yapilan arac turu: Ford\n (%d TL)", tutarF);
   }

    
    
    
    return 0;
}
