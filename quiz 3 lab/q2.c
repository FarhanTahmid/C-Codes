#include<stdio.h>
#include<string.h>

struct date
{
    int date;
    char month[10];
    int year;
};
struct date input[2];
int main()
{
    struct date input[2];
    printf("Please enter the date 1 with the month name and year:\n");
    scanf("%d", &input[0].date);
    scanf("%s", &input[0].month);
    scanf("%d", &input[0].year);
    
    printf("Please enter the date 2 with the month name and year:\n");
    scanf("%d", &input[1].date);
    scanf("%s", &input[1].month);
    scanf("%d", &input[1].year);

    if(input[0].date==input[1].date && input[0].year==input[1].year && strcmp(input[0].month,input[1].month)==0)
    {
        
       printf("Dates are equal");
    }
    else
    {
        printf("Dates are not equal");
    }

    return 0;
}