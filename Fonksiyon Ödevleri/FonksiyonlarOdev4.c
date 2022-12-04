#include <stdio.h>

int EnBuyuk2nciEleman(int dizi[]) // EN BÜYÜK 2. ELEMANI DÖNDÜREN FONKSİYON
{
    int i;
    int EnBuyukEleman = 0;
    int EnBuyuk2nciEleman = 0;

    for (i = 0; i < 5; i++)
    {
        if (EnBuyukEleman < dizi[i])
        {
            EnBuyukEleman = dizi[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        if (EnBuyuk2nciEleman <= dizi[i] && dizi[i] != EnBuyukEleman)
        {
            EnBuyuk2nciEleman = dizi[i];
        }
    }
    return EnBuyuk2nciEleman;
}

int main()
{
    int dizi1[] = {1, 12, 10, 4, 8};
    printf("En buyuk ikinci eleman: %d", EnBuyuk2nciEleman(dizi1));

    return 0;
}
