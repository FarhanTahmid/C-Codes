#include <stdio.h>
int main() 
{
    int r, c, i, j;
    
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c],b[r][c],sum[r][c];

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            scanf("%d", &a[i][j]);
        }
    printf("First matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
        

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            scanf("%d", &b[i][j]);
        }
    
    printf("Second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
    printf("\n");
    }
    printf("\n");
        

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("Sum of two matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
            if (j == c - 1) {
                printf("\n");
            }
        }

    return 0;
}