#include<stdio.h>
int leapYear(int);

int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    n=leapYear(n);
    if(leapYear(n))
        printf("%d",n);
    else
        printf("%d",n);

    return 0;
}

int leapYear(int y)
{
    if((y%400==0 && y%100!=0)||(y%4==0))
        return 1;
    else
        return 0;
}
