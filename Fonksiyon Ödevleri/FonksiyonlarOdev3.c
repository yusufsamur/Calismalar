#include <stdio.h>

int EnKucukSayi(int dizi[]) // DİZİNİN EN KÜÇÜK ELEMANINI DÖNDÜREN FONKSİYON
{

    int i;
    int EnKucuk = dizi[0];
    for (i = 0; i < 5; i++)
    {
        if (dizi[i] < EnKucuk)
        {

            EnKucuk = dizi[i];
        }
    }
    return EnKucuk;
}

int main()
{
    int dizi1[] = {42, 97, 22, 35, 81};

    printf("Dizinin en kucuk elemani: %d", EnKucukSayi(dizi1));

    return 0;
}
