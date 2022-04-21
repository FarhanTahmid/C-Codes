#include<stdio.h>
int main()
{
    int i, j, row, column, sum =0;
    int temp;
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
    if(i<j)
    {
        row=i;
    }
    else
    {
        column=j;
    }
    

    for(i=0;i<row;i++)
    {
        column=row;
        temp=a[i][j];
        a[i][j]=a[i][(row-j)-1];
        a[i][(row-j)-1]=temp;
    }

    printf("Matrix after interchanging diagonals:\n");
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < column; ++j) 
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    return 0;
}
    

