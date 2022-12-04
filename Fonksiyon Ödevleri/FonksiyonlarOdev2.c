
#include <stdio.h>

int EnBuyukSayi(int dizi[]) // DİZİNİN EN BÜYÜK ELEMANINI DÖNDÜREN FONKSİYON
{
    int enbuyuk = 0;
    int i;
    for (i = 0; i < 5; i++)
    {

        if (dizi[i] > enbuyuk)
        {
            enbuyuk = dizi[i];
        }
    }
    return enbuyuk;
}

int main()
{

    int dizi1[] = {3, 4, 2, 8, 1};

    printf("Dizinin en buyuk elemani: %d", EnBuyukSayi(dizi1));

    return 0;
}
