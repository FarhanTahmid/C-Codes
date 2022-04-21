#include<stdio.h>

int main()
{
    int r, c, i, j, value, sum=0;
    printf("Enter the value of row and column: ");
    scanf("%d %d", &r, &c);
    int a[r][c];

    printf("Enter values for the matrix: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the column value you want to sum up: ");
    scanf("%d", &value);

    for(i=0; i<r; i++){
        sum+= a[i][value-1];
    }

    printf("Sum of column %d: %d", value, sum);

    return 0;
}