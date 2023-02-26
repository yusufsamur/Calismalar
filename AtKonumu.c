#include <stdio.h>

int main()
{
    int i, j, k, l, satir, sutun;
    int dizi[8][8];
    for (k = 0; k < 8; k++)
    {
        for (l = 0; l < 8; l++)
        {
            dizi[k][l] = '-';
        }
    }

    printf("  0 1 2 3 4 5 6 7\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", i);
        for (j = 0; j < 8; j++)
        {
            printf("%c ", dizi[i][j]);
        }
        printf("\n");
    }

    printf("Atin konumunu giriniz(Once satir,Sonra sutun); ");
    scanf("%d%d", &satir, &sutun);
    dizi[satir][sutun] = 'A';
    if (satir >= 2)
    {
        if (sutun >= 1)
        {
            dizi[satir - 2][sutun - 1] = '*';
        }
        if (sutun <= 6)
        {
            dizi[satir - 2][sutun + 1] = '*';
        }
    }

    if (satir >= 1)
    {
        if (sutun >= 2)
        {
            dizi[satir - 1][sutun - 2] = '*';
        }
        if (sutun <= 5)
        {
            dizi[satir - 1][sutun + 2] = '*';
        }
    }
    if (satir <= 6)
    {
        if (sutun >= 2)
        {
            dizi[satir + 1][sutun - 2] = '*';
        }
        if (sutun <= 5)
        {
            dizi[satir + 1][sutun + 2] = '*';
        }
    }

    if (satir <= 5)
    {
        if (sutun >= 1)
        {
            dizi[satir + 2][sutun - 1] = '*';
        }
        if (sutun <= 6)
        {
            dizi[satir + 2][sutun + 1] = '*';
        }
    }

    printf("\n\n");

    printf("  0 1 2 3 4 5 6 7\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", i);
        for (j = 0; j < 8; j++)
        {
            printf("%c ", dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}