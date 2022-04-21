#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    int px=n;
    int py=n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<n*2; j++)
        {
            if(j==px || j==py)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        px--;
        py++;
        printf("\n");
    }

    return 0;
}
