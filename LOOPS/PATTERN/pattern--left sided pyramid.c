/*
  *
 **
***
 **
  *
*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d", &n);

    for(i=1; i<=(n-1); i++)
    {
        for(k=i; k<=(n-1); k++)
        {
            printf(" ");
        }
        for(j=1; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        for(k=1; k<i; k++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
