#include <stdio.h>

int main()
{
    int i, n, sum=0, count=0;;

    printf("Enter a number,n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        if(count%2==0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
        count++;
    }

    printf("Summation = %d", sum);

    return 0;
}
