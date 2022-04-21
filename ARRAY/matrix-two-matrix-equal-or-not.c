#include <stdio.h>
int main() 
{
    int r, c, i, j, flag;
    printf("Enter row number: ");
    scanf("%d", &r);
    printf("Enter column number: ");
    scanf("%d", &c);
    int a[r][c],b[r][c];

    printf("Enter the first matrix: ");
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

    printf("Enter the second matrix: ");
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

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==b[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Matrixes are same.");
    }
    else
    {
        printf("Matrixes are not same.");
    }
    

    return 0;
}