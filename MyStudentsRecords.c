#include <stdio.h>
#include <stdlib.h>

typedef struct studentInfo
{
    int rno;
    char name[15];
    char surname[15];
    struct subject
    {
        int scode;
        char sname[20];
        int mark;
    } sub[3];
    int total;
    float per;
} student;

void create();
void display();
void append();
void noOfstudents();
void search();
void update();
void delete();

int main()
{
    int ch;

    do
    {
        printf("\n1.CREATE");
        printf("\n2.DISPLAY");
        printf("\n3.APPEND");
        printf("\n4.NO OF STUDENTS");
        printf("\n5.SEARCH");
        printf("\n6.UPDATE");
        printf("\n7.DELETE");
        printf("\n0.EXIT");

        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            append();
            break;
        case 4:
            noOfstudents();
            break;
        case 5:
            search();
            break;
        case 6:
            update();
            break;
        case 7:
            delete ();
            break;
        }

    } while (ch != 0);

    return 0;
}

void create()
{
    student *s;
    FILE *fp;

    int n, i, j;
    printf("Enter how many students you want: ");
    scanf("%d", &n);
    s = (student *)calloc(n, sizeof(student));

    fp = fopen("mystudents.txt", "w");

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        s[i].per = 0;
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rno);
        fflush(stdin);
        printf("Enter Student Name: ");
        scanf("%[^\n]s", s[i].name);
        for (j = 0; j < 3; j++)
        {
            printf("Enter Marks Of %d. Subject : ", j + 1);
            scanf("%d", &s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per = s[i].total / 3.0;
        fwrite(&s[i], sizeof(student), 1, fp);
    }
    fclose(fp);
};
void display()
{
    student s1;
    FILE *fp;
    fp = fopen("mystudents.txt", "r");
    while (fread(&s1, sizeof(student), 1, fp))
    {
        printf("\n%-5d%-20s", s1.rno, s1.name);
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", s1.sub[j].mark);
        }
        printf("%5d%7.2f\n", s1.total, s1.per);
    }
    fclose(fp);
};
void append()
{
    student *s;
    FILE *fp;

    int n, i, j;
    printf("Enter how many students you want: ");
    scanf("%d", &n);
    s = (student *)calloc(n, sizeof(student));

    fp = fopen("mystudents.txt", "a");

    for (i = 0; i < n; i++)
    {
        s[i].total = 0;
        s[i].per = 0;
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rno);
        fflush(stdin);
        printf("Enter Student Name: ");
        scanf("%[^\n]s", s[i].name);
        for (j = 0; j < 3; j++)
        {
            printf("Enter Marks Of %d. Subject : ", j + 1);
            scanf("%d", &s[i].sub[j].mark);
            s[i].total += s[i].sub[j].mark;
        }
        s[i].per = s[i].total / 3.0;
        fwrite(&s[i], sizeof(student), 1, fp);
    }
    fclose(fp);
};

void noOfstudents()
{
    FILE *fp;
    fp = fopen("mystudents.txt", "r");
    fseek(fp, 0, SEEK_END);
    printf("\nThere are %d students\n", ftell(fp) / sizeof(student));
    fclose(fp);
};

void search()
{
    student s1;
    FILE *fp;
    int rno, flag = 0;
    fp = fopen("mystudents.txt", "r");
    printf("Enter rollno to search: ");
    scanf("%d", &rno);
    while (fread(&s1, sizeof(student), 1, fp))
    {
        if (s1.rno == rno)
        {
            flag++;
            printf("\n%-5d%-20s", s1.rno, s1.name);
            for (int j = 0; j < 3; j++)
            {
                printf("%4d", s1.sub[j].mark);
            }
            printf("%5d%7.2f\n", s1.total, s1.per);
        }
    }
    if (!flag)
    {
        printf("\nThere isn't a student with this rollno: %d\n", rno);
    }

    fclose(fp);
};

void update()
{
    student s1;
    FILE *fp, *fp1;
    int rno, found = 0;
    fp = fopen("mystudents.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("Enter rollno to update : ");
    scanf("%d", &rno);
    while (fread(&s1, sizeof(student), 1, fp))
    {
        if (s1.rno == rno)
        {
            found++;
            s1.total = 0, s1.per = 0.0;
            fflush(stdin);
            printf("Enter Student's New Name: ");
            scanf("%[^\n]s", s1.name);
            for (int j = 0; j < 3; j++)
            {
                printf("Enter New Marks Of %d. Subject : ", j + 1);
                scanf("%d", &s1.sub[j].mark);
                s1.total += s1.sub[j].mark;
            }
            s1.per = s1.total / 3.0;
        }
        fwrite(&s1, sizeof(student), 1, fp1);
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("mystudents.txt", "w");
        while (fread(&s1, sizeof(student), 1, fp1))
        {

            fwrite(&s1, sizeof(student), 1, fp);
        }
        fclose(fp1);
        fclose(fp);
    }
    else
    {
        printf("\nThere isn't a student with this rollno: %d\n", rno);
    }

    fclose(fp);
};

void delete()
{
    student s1;
    FILE *fp, *fp1;
    int rno, found = 0;
    fp = fopen("mystudents.txt", "r");
    fp1 = fopen("temp.txt", "w");
    printf("Enter rollno to delete : ");
    scanf("%d", &rno);
    while (fread(&s1, sizeof(student), 1, fp))
    {
        if (s1.rno == rno)
        {
            found++;
        }
        else
        {
            fwrite(&s1, sizeof(student), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        fp1 = fopen("temp.txt", "r");
        fp = fopen("mystudents.txt", "w");
        while (fread(&s1, sizeof(student), 1, fp1))
        {

            fwrite(&s1, sizeof(student), 1, fp);
        }
        fclose(fp1);
        fclose(fp);
    }
    else
    {
        printf("\nThere isn't a student with this rollno: %d\n", rno);
    }

    fclose(fp);
};