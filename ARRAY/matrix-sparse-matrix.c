#include<stdio.h>
int main()
{
    int i, j, row, column, sum =0;
    int Uflag=0;
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
            if(a[i][j]==0)
            {
                Uflag++;
            }
        }
    }
    if(Uflag >= (row*column)/2)
    {
        printf("The matrix is a sparse matrix.");
    }
    else
    {
        printf("The matrix is not a sparse matrix.");
    }
    return 0;
}
    