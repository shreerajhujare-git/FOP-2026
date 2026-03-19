#include <stdio.h>

struct student
{
    char name[50];
    float m1, m2, avg;
};

int main()
{
    struct student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks m1: ");
        scanf("%f", &s[i].m1);

        printf("Enter marks m2: ");
        scanf("%f", &s[i].m2);

        s[i].avg = (s[i].m1 + s[i].m2) / 2;
    }

    printf("\n Student Details \n");

    for(i = 0; i < 5; i++)
    {
        printf("\nName: %s", s[i].name);
        printf("\nMarks m1: %.2f", s[i].m1);
        printf("\nMarks m2: %.2f", s[i].m2);
        printf("\nAverage: %.2f\n", s[i].avg);
    }

    return 0;
}