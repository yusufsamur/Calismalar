#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct enboy                               //İÇ İÇE STRUCT YAPILARI
{
    int derece;
    int dakika;
    float saniye;
    int yukseklik;
};
struct konum
{
    struct enboy en;
    struct enboy boylam;
};
int main()
{
    struct enboy en1 = {3, 4, 2.27, 5};
    struct enboy boylam2 = {8, 4, 2.27, 5};
    struct konum test1 = {en1, boylam2};
    printf("konum test1in ozellikleri\nEN OZELLIKLERI\nderece:%d\ndakika:%d\nsaniye:%.2f\nyukseklik:%d", test1.en.derece, test1.en.dakika, test1.en.saniye, test1.en.yukseklik);

    return 0;
}
