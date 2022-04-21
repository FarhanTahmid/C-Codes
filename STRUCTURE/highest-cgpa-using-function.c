#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

void highestCgpa(struct student s[]);
int main()
{
    int i;
    struct student s[3];
    for(i=0; i<3; i++)
    {
        scanf("\n");
        scanf("%[^\n]", s[i].name);
        fflush(stdin);
        scanf("%d", &s[i].roll);
        fflush(stdin);
        scanf("%f", &s[i].cgpa);
    }

    highestCgpa(s);
    return 0;
}

void highestCgpa(struct student s[])
{
    int m=0, i;
    for(i=0; i<3; i++)
    {
        if(s[i].cgpa>s[m].cgpa)
            m=i;
    }
    printf("\nName: %s \nRoll: %d \nCGPA: %f", s[m].name, s[m].roll, s[m].cgpa);
}
