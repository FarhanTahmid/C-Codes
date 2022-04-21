#include <stdio.h>
struct Student
{
    char name[50];
    int id;
    float cgpa;
} s[3];

int main()
{
    int i;
    printf("Enter data for 3 students:\n");
    for(i=0; i<3; ++i)
    {
        scanf("\n");
        gets(s[i].name);
        scanf("%d",&s[i].id);
        scanf("%f",&s[i].cgpa);

    }
    printf("Enterd Data:\n");
    for(i=0; i<3; ++i)
    {
        printf("Name:\t%s\nID:\t%d\nCGPA:\t%.2f\n\n",s[i].name,s[i].id,s[i].cgpa);
    }
    struct Student n;
    printf("Least cgpa holder:\n");
    n = s[0];

    for(i=1; i<3; ++i)
    {
        if(s[i].cgpa < n.cgpa)
            n = s[i];
    } 
    printf("Name: %s\nID: %d\nCGPA: %.2f",n.name,n.id,n.cgpa);
    
    return 0;
}