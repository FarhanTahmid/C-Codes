#include<stdio.h>
int checkPrimeNumber(int);

int main()
{
    int i, n1, n2, count=0;
    scanf("%d%d", &n1, &n2);

    for(i=n1; i<=n2; i++)
    {
        if(checkPrimeNumber(i))
        {
            count++;
            if(count==1)
            {
                printf("%d", i);
            }
            else{
                printf(", %d", i);
            }
        }
    }

    return 0;
}

int checkPrimeNumber(int n)
{
    int i;
    if(n==1)
    {
        return 0;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
