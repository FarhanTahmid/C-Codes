
#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter how many rows you want: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-2;j++)
        {
            if((i==1)||(i==n)||(j==1)||(j==n-2))
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

