#include<stdio.h>
int main()
{
    int a, dif, n, i, tn, sum=0;
    printf("Enter the first term value: ");
    scanf("%d", &a);
    printf("Enter the total numbers in the a.p series: ");
    scanf("%d", &n);
    printf("Enter the common difference between the numbers: ");
    scanf("%d", &dif);
    sum=(n*(2*a+(n-1)*dif))/2;
    tn=a+(n-1)*dif;
    printf("Sum of A.P series is: ");
    for(i=a; i<=tn; i=i+dif)
    {
        if(i!=tn)
            printf("%d + ", i);
        else
            printf("%d = %d \n\n", i, sum);
    }

    return 0;
}
