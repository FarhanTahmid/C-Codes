#include<stdio.h>

int leapYear(int y)
{
    if((y%400==0 && y%100!=0)||(y%4==0))
        return 1;
    else
        return 0;

}
int main()
{
    int n;
    scanf("%d", &n);
    if(leapYear(n))
    {
        printf("%d is a leap year.", n);
    }
    else
        printf("%d is not a leap year.", n);

    return 0;
}
