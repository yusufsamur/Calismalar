#include <stdio.h>

float ParametredenBuyukSayilarinOrtalamasi(int dizi[], int n) // GİRİLEN PARAMETREDEN BÜYÜK OLAN DİZİ ELEMANLARININ ARİTMETİK ORTALAMASINI DÖNDÜREN FONKSİYON
{

    int i;
    float toplam = 0;
    float sayac = 0;
    for (i = 0; i < 5; i++)
    {
        if (dizi[i] > n)
        {
            toplam += dizi[i];
            sayac++;
        }
    }

    return toplam / sayac;
}

int main()
{
    int dizi1[] = {3, 5, 9, 2, 12};
    int deger;

    printf("Hangi degerden buyuk elemanlarin ortalamasini istiyorsunuz ? :");
    scanf("%d", &deger);

    printf("Girdiginiz degerden buyuk elemanlarin ortalamasi: %.2f", ParametredenBuyukSayilarinOrtalamasi(dizi1, deger));

    return 0;
}
