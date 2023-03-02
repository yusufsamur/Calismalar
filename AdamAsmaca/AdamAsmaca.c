#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void selectWord(int, char[]);
int randomNumber();

void drawStickman(int);
void drawWordBoxes(char[][3], int);

int main()
{
    SetConsoleOutputCP(65001);
    char exit;
    int round;

    while (exit != 'q')
    {
        char word[20];
        char userAnswer[20];
        char usedLetters[10] = {"          "};

        int heart = 6, flag = 0;

        int number = randomNumber();

        selectWord(number, word);
        int wordLenght = strlen(word);
        char box[wordLenght][3];
        for (int i = 0; i < wordLenght; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                box[i][j] = '_';
            }
        }
        printf("\nADAM ASMACA OYUNUNA HOŞGELDİNİZ\n");
        printf("Oyunumuzda harf almak için harf girmeli, tahminde bulunmak için kelime girmeniz gerekmektedir.\n");
        printf("(Devam etmek için klavyeden bir tuşa basınız.)");
        getch();
        system("cls");
        drawStickman(heart);
        printf("\n");
        drawWordBoxes(box, wordLenght - 1);
        printf("\n\nHarf giriniz ya da tahminde bulununuz: ");
        scanf("%s", userAnswer);
        round = 0;

        system("cls");
        do
        {

            if (strlen(userAnswer) == 1)
            {
                round++;
                int i;
                char ch = tolower(userAnswer[0]);
                usedLetters[round] = ch;
                for (i = 0; i < wordLenght; i++)
                {
                    if (ch == word[i])
                    {
                        flag = 1;
                        box[i][1] = ch;
                        box[i][0] = ' ';
                        box[i][2] = ' ';
                    }
                }
                if (!flag)
                {

                    heart--;
                }

                flag = 0;
            }
            else if (memcmp(word, userAnswer, wordLenght - 1) == 0)
            {
                printf("TEBRİKLER ! doğru tahminde bulundunuz.");
                break;
            }
            else
            {
                printf("Maalesef yanlış tahminde bulundunuz.Kelimemiz: %s idi.", word);
                break;
            }
            system("cls");

            printf("\nKullanılan harfler: ");
            for (int i = 0; i < round + 1; i++)
            {
                printf("%c ", usedLetters[i]);
            }
            printf("\n");
            drawStickman(heart);
            printf("\n");
            drawWordBoxes(box, wordLenght - 1);
            printf("\n\nHarf giriniz ya da tahminde bulununuz: ");
            scanf("%s", userAnswer);
        } while (heart > 1);

        if (heart <= 1)
        {
            system("cls");
            drawStickman(heart - 1);

            printf("\n\nMaalesef asıldınız.Kelimemiz: %s idi.", word);
        }
        printf("\nçıkmak için q'ya, tekrar oynamak için herhangi bir tuşa basınız.");
        exit = getch();
        system("cls");
    }
    return 0;
}

void selectWord(int number, char word[])
{
    FILE *fp = fopen("kelimeler.txt", "r");

    int line = 1;
    while (fgets(word, sizeof(char) * 20, fp))
    {
        if (line == number)
        {
            fclose(fp);
            return;
        }
        line++;
    }
    fclose(fp);
    return;
}

int randomNumber()
{
    srand(time(NULL));

    int number;
    number = rand() % 100 + 1;
    return number;
}

void drawStickman(int heart)
{
    switch (heart)
    {
    case 0:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n");
        printf("|    /|\\\n");
        printf("|    / \\\n");
        break;
    case 1:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n|    /|\\\n|    /\n");
        break;
    case 2:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n|    /|\\\n|\n");
        break;
    case 3:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n|    /|\n|\n");
        break;
    case 4:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n|     |\n|\n");
        break;
    case 5:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|     O\n|\n|\n");
        break;
    case 6:
        printf("_ _ _ _\n");
        printf("|     |\n");
        printf("|\n|\n|\n");
        break;
    }
}

void drawWordBoxes(char box[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", box[i][j]);
        }
        printf(" ");
    }
}