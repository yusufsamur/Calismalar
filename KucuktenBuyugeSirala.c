#include <stdio.h>
void sirala(float dizi[])
{
    float yedek;
    for (int i = 0; i < 4; i++)
    {
        for (int k = i + 1; k < 5; k++)
        {
            if (dizi[k] < dizi[i])
            {
                yedek = dizi[i];
                dizi[i] = dizi[k];
                dizi[k] = yedek;
            }
        }
    }
}

int main()
{

    float test[5] = {2, 5, 6, 1, 8};
    sirala(&test[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", test[i]);
    }

    return 0;
}
