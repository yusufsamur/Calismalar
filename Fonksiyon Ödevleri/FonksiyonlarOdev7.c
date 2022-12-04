#include <stdio.h>

int ParametredenBuyukSayilarinToplami(int dizi[], int n) // GİRİLEN PARAMETREDEN BÜYÜK OLAN DİZİ ELEMANLARININ TOPLAMINI DÖNDÜREN FONKSİYON
{

    int i;
    int toplam = 0;
    for (i = 0; i < 5; i++)
    {
        if (dizi[i] > n)
        {
            toplam += dizi[i];
        }
    }

    return toplam;
}

int main()
{
    int dizi1[] = {3, 5, 9, 2, 12};
    int deger;

    printf("Hangi degerden buyuk elemanlari toplamak istiyorsunuz ? :");
    scanf("%d", &deger);

    printf("Girdiginiz degerden buyuk elemanlarin toplami: %d", ParametredenBuyukSayilarinToplami(dizi1, deger));

    return 0;
}
