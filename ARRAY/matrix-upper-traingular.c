#include<stdio.h>
int main()
{
    int i, j, row, column, sum =0;
    int Uflag, Lflag;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int a[row][column];

    printf("Enter the matrix: ");
    for (i = 0; i < row; ++i)
        for (j = 0; j < column; ++j) 
        {
            scanf("%d", &a[i][j]);
        }
    printf("Entered matrix:\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j) 
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j) 
        {
            if(a[i][j]==0 && j<i)
            Uflag=1;
        }
    }
    if(Uflag==1)
    {
        printf("The matrix is upper triangular.");
    }
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j) 
        {
            if(a[i][j]==0 && j>i)
            Lflag=1;
        }
    }
    if(Lflag==1)
    {
        printf("The matrix is lower triangular.");
    }
    return 0;
}
    