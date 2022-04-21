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
    {
        sum=0;
        for (j = 0; j < column; ++j) 
        {
            sum+=a[i][j];
        }
        printf("\nSum of row no. %d is %d", i+1, sum);
    }
        
    printf("\n");
    
    for (i = 0; i < row; ++i)
    {
        sum=0;
        for (j = 0; j < column; ++j) 
        {
            
            sum+=a[j][i];
        }
        printf("\nSum of column no. %d is %d", j+1, sum);
    }
    
    return 0;
}
    