//display the sum of the series [9 +99+999+9999...]

#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    long int t = 9;
    scanf("%d", &n);
    printf("Series :");

    for(i=1; i<=n; i++)
    {
        sum+=t;
        printf("%d + ",t);
        t = t*10+9;
    }
    printf("\nSum : %d", sum);

    return 0;
}
