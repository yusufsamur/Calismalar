#include <stdio.h>
#include <windows.h>
#include <time.h>

int random();
void rabbitMove(int *);
void turtleMove(int *);
void writePosition(int, int);

int main()
{
    int turtlePosition = 1, rabbitPosition = 1, flag = 0;
    do
    {
        Sleep(1000);
        rabbitMove(&rabbitPosition);
        turtleMove(&turtlePosition);
        writePosition(rabbitPosition, turtlePosition);
        printf("\n\n");
        flag++;

    } while (turtlePosition < 70 && rabbitPosition < 70);
    if (turtlePosition >= 70 && rabbitPosition >= 70)
    {
        printf("Yarisma Berabere Bitti !");
    }
    else if (turtlePosition == 70)
    {
        printf("Yarismayi Kaplumbaga Kazandi !");
    }
    else if (rabbitPosition == 70)
    {
        printf("Yarismayi Tavsan Kazandi !");
    }

    printf("\n%d kere tekrar edildi.", flag);

    return 0;
}

int random()
{

    int number;

    srand(time(NULL));

    number = rand() % 10 + 1;

    return number;
}

void rabbitMove(int *rabbitPosition)
{
    int randomNumber = random();
    if (randomNumber >= 1 && randomNumber <= 2)
    {
    }
    else if (randomNumber >= 3 && randomNumber <= 4)
    {
        *rabbitPosition += 9;
    }
    else if (randomNumber == 5)
    {
        *rabbitPosition -= 12;
    }
    else if (randomNumber >= 6 && randomNumber <= 8)
    {
        *rabbitPosition += 1;
    }
    else if (randomNumber >= 9 && randomNumber <= 10)
    {
        *rabbitPosition -= 2;
    }

    if (*rabbitPosition < 1)
    {
        *rabbitPosition = 1;
    }
    if (*rabbitPosition > 70)
    {
        *rabbitPosition = 70;
    }
}

void turtleMove(int *turtlePosition)
{
    int randomNumber = random();
    if (randomNumber >= 1 && randomNumber <= 5)
    {
        *turtlePosition += 3;
    }
    else if (randomNumber >= 6 && randomNumber <= 7)
    {
        *turtlePosition -= 6;
    }
    else if (randomNumber >= 8 && randomNumber <= 10)
    {
        *turtlePosition += 1;
    }

    if (*turtlePosition < 1)
    {
        *turtlePosition = 1;
    }
    if (*turtlePosition > 70)
    {
        *turtlePosition = 70;
    }
}

void writePosition(int rabbitPosition, int turtlePosition)
{

    for (int i = 0; i < rabbitPosition - 1; i++)
    {
        printf("-");
    }
    printf("T");
    for (int i = 0; i < 70 - rabbitPosition; i++)
    {
        printf(" ");
    }
    printf("| BITIS NOKTASI");

    printf("\n");
    for (int j = 0; j < turtlePosition - 1; j++)
    {
        printf("-");
    }
    printf("K");
    for (int i = 0; i < 70 - turtlePosition; i++)
    {
        printf(" ");
    }
    printf("|");
}
