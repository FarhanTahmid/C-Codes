#include <stdio.h>
int main() 
{
    int r, c, i, j,sum,k;
    printf("Enter the number of rows you want: ");
    scanf("%d", &r);
    printf("\nEnter the number of columns you want: ");
    scanf("%d", &c);
    int a[r][c],b[r][c],multi[r][c];

    printf("\nEnter the values for matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) 
        {
            printf("A[%d][%d]", i,j);
            scanf("%d", &a[i][j]);
        }
    
    printf("Matrix A:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c ;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
        
    printf("\nEnter the values for matrix B:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) 
        {
            printf("B[%d][%d]", i,j);
            scanf("%d", &b[i][j]);
        }
    
    printf("Matrix B:\n");
    for(i = 0;i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ",b[i][j]);
        }
    printf("\n");
    }
    printf("\n");
        

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum = 0;
            for(k = 0; k < r; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            multi[i][j] = sum;
        }
    }

    printf("\nProduct of matrix A * B:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}