#include<stdio.h>
int factorial(int a)
{
    int i, fact=1;
    for(i=1;i<=a;i++)
        fact*=i;
    return fact;
}
int sumOfSeries(int b)
{
    int j,d,sum=0;
    for(j=1;j<=b;j++)
    {
        d=factorial(j)/j;
        sum+=d;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);

    printf("Sum of the series: %d", sumOfSeries(n));

    return 0;
}
