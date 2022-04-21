#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, sum=0, j, k;
    printf("Enter the value of A: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        j= n-i;
        k= pow(j,2);

        if(i%2==0)
            sum= sum + k;
        else
            sum= sum - k;
    }
    printf("The sum is: %d", sum+1);

    return 0;
}