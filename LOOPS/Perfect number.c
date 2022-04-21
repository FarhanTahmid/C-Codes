
//Perfect Number
// sum of the divisors of entered number will be equal to the entered number

#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    printf("\nDivisors: ");
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            printf("%d + ", i);
        }
    }
    printf("\nThe sum of the divisor is: %d",sum);
    if(n==sum)
        printf("\n%d is a perfect number", n);
    else
        printf("\n%d is not a perfect number", n);

    return 0;
}
