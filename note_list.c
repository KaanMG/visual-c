#include <stdio.h>

int main()
{
    int notes, lessons, note;
    printf("How many courses' grade lists will you create ?\n");
    scanf("%d", &lessons);

    int list[lessons][4];
    char lessonName[50];

    for (int i = 0; i < lessons; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            if (j < 2)
            {
                printf("Enter your %d.Lesson Grade = ", (i + 1));
                scanf("%d", &note);

                list[i][j] = note;
            }
            else
            {
                printf("Enter your %d.Lesson Oral Grade = ", (i + 1));
                scanf("%d", &note);

                list[i][j] = note;
            }
        }
    }

    printf("\t\t Grade - 1\tGrade - 2\t\tOral Grade - 1\t\tOral Grade - 2\n");

    for (int k = 0; k < lessons; k++)
    {
        printf("\tEnter your %d.Lesson name = ", (k + 1));
        scanf("%s", &lessonName);
        printf("\n%s\t", lessonName);

        for (int l = 0; l < 4; l++)
        {
            printf("%d\t", list[k][l]);
        }
    }

    return 0;
}