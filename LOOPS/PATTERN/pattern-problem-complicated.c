#include<stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i = n; i >= 0; i--)
    {
        for(j =1; j <= n; j++)
        {
            if(j <= i)
            printf("%c", '@'+j);
            else
            printf(" ");
        }
        for(j = n; j >= 1;j--)
        {
            if(j <= i)
            printf("%c", '@'+j);
            else
            printf(" ");
        }
        printf("\n");
        }
    return 0;
}
