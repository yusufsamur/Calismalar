#include <stdio.h>

int OrtalamadanBuyukElemanSayisi(int dizi[]) // DİZİNİN ELEMANLARININ ARİTMETİK ORTALAMASINDAN BÜYÜK ELEMAN SAYISINI DÖNDÜREN FONKSİYON
{
    int toplam = 0;
    int i;
    float ortalama;
    int sayac = 0;
    for (i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }
    ortalama = toplam / 5;
    for (i = 0; i < 5; i++)
    {
        if (dizi[i] > ortalama)
        {
            sayac++;
        }
    }
    return sayac;
}

int main()
{

    int dizi1[] = {3, 6, 8, 1, 9};
    printf("Dizinin, dizi elemanlarinin ortalamasindan buyuk olan eleman sayisi: %d", OrtalamadanBuyukElemanSayisi(dizi1));
    return 0;
}
