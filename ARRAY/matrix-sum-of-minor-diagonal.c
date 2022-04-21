#include<stdio.h>
int main()
{
    int i, j, row, column, sum =0;
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
        for (j = 0; j < column; ++j) 
        {
            if(i+j==(row+1)-2)
            sum+=a[i][j];
        }
    
    printf("Sum of the minor diagonal of the matrix is %d.", sum);
    
    return 0;
}