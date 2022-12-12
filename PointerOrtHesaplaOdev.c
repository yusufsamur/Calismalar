#include <stdio.h>

void ortHesapla(int dizi1[], int dizi2[], int dizi3[], int dizi4[], int dizi5[])
{
    dizi1[2] = (dizi1[1] + dizi1[0]) / 2;
    dizi2[2] = (dizi2[1] + dizi2[0]) / 2;
    dizi3[2] = (dizi3[1] + dizi3[0]) / 2;
    dizi4[2] = (dizi4[1] + dizi4[0]) / 2;
    dizi5[2] = (dizi5[1] + dizi5[0]) / 2;
}

int main()
{
    int ogrenci1[3], ogrenci2[3], ogrenci3[3], ogrenci4[3], ogrenci5[3];
    printf("1. Ogrencinin sirasiyla vize ve final notunu giriniz:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ogrenci1[i]);
    }
    printf("2. Ogrencinin sirasiyla vize ve final notunu giriniz:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ogrenci2[i]);
    }
    printf("3. Ogrencinin sirasiyla vize ve final notunu giriniz:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ogrenci3[i]);
    }
    printf("4. Ogrencinin sirasiyla vize ve final notunu giriniz:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ogrenci4[i]);
    }
    printf("5. Ogrencinin sirasiyla vize ve final notunu giriniz:\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &ogrenci5[i]);
    }
    ortHesapla(&ogrenci1[0],&ogrenci2[0],&ogrenci3[0],&ogrenci4[0],&ogrenci5[0]);

    printf("1. Ogrenci \nvize: %d \nfinal: %d \nvize final ortalamasi: %d\n\n", ogrenci1[0], ogrenci1[1], ogrenci1[2]);
    printf("2. Ogrenci \nvize: %d \nfinal: %d \nvize final ortalamasi: %d\n\n", ogrenci2[0], ogrenci2[1], ogrenci2[2]);
    printf("3. Ogrenci \nvize: %d \nfinal: %d \nvize final ortalamasi: %d\n\n", ogrenci3[0], ogrenci3[1], ogrenci3[2]);
    printf("4. Ogrenci \nvize: %d \nfinal: %d \nvize final ortalamasi: %d\n\n", ogrenci4[0], ogrenci4[1], ogrenci4[2]);
    printf("5. Ogrenci \nvize: %d \nfinal: %d \nvize final ortalamasi: %d\n\n", ogrenci5[0], ogrenci5[1], ogrenci5[2]);

    return 0;
}
