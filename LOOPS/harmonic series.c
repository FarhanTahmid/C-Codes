// write a program to display n terms of harmonic series and their sum

#include<stdio.h>
int main()
{

    double n,sum=0,i;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);

    }
    printf("%.2lf",sum);
    return 0;
}
