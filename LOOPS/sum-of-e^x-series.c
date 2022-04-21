#include<stdio.h>

int main()
{
    int i, n;
    float x, sum=1, term=1;
     
    printf("Enter the value for x : ");
    scanf("%f", &x);
     
    printf("\nEnter the value for n : ");
    scanf("%d", &n);
     
    for(i=1;i<=n;i++)
    {
        term=term*x/i;
        sum=sum+term;
    }
     
    printf("\nThe Exponential Value of %f = %.4f", x, sum);
    getch();
}