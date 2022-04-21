// program for sum of exponential series

// sum = e1+e2+e3+...

#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        sum+=exp(i);
    printf("sum : %d", sum);

    return 0 ;
}


