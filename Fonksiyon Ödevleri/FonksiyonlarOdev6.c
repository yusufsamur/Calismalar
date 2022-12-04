#include <stdio.h>
int OrtalamadanKucukElemanSayisi(int dizi[]) // DİZİNİN ELEMANLARININ ARİTMETİK ORTALAMASINDAN KÜÇÜK ELEMAN SAYISINI DÖNDÜREN FONKSİYON
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
        if (dizi[i] < ortalama)
        {
            sayac++;
        }
    }
    return sayac;
}

int main()
{

    int dizi1[] = {3, 6, 8, 1, 9};
    printf("Dizinin, dizi ortalamasindan kucuk olan eleman sayisi: %d", OrtalamadanKucukElemanSayisi(dizi1));

    return 0;
}
