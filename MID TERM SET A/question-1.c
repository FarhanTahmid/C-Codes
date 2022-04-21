#include<stdio.h>
int main()
{
    int t, n, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    do
    {
        remainder = t % 10;
        sum += remainder;
        t = t/10;

    }while(t != 0);
    printf("Summation : %d", sum);

    return 0;
}
