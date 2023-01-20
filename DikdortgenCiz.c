#include <stdio.h>

void ciz(int kisa, int uzun)                   //DİKDÖRTGEN ÇİZEN FONKSİYON
{
    int i, j, k;
    for (i = 0; i < uzun + 2; i++)
    {
        printf("_");
    }
    for (j = 0; j < kisa; j++)
    {
        printf("\n|");
        for (k = 0; k < uzun; k++)
        {
            if (j == kisa - 1)
            {
                printf("_");
            }
            else
            {
                printf(" ");
            }
        }
        printf("|");
    }
};

int main()
{
    int kisakenar, uzunkenar;
    printf("kisa ve uzun kenari giriniz: ");
    scanf("%d%d", &kisakenar, &uzunkenar);
    ciz(kisakenar, uzunkenar);

    return 0;
}
