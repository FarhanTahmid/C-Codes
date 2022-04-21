

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d", &n);
    printf("Even numbers are :");
    for(i=1; i<=n; i++)
        printf("%d, ", 2*i);
        sum += 2*i;

    printf("Sum : %d", sum);

    return 0;
}
