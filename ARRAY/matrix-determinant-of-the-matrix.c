#include<stdio.h>
int main()
{
    int i, j, row, column, sum =0;
    int Uflag, Lflag;
    int det;
    int m,b,c,d,e,f,g,h,k;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    int a[row][column];

    printf("Enter the matrix: ");
    for (i = 0; i < row; ++i)
    {
         for (j = 0; j < column; ++j) 
        {
            scanf("%d", &a[i][j]);
        }
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
    if(row==2 && column==2)
    {
        det = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
        printf("Determinant of the matrix is %d", det);
    }
    else if(row==3 && column==3)
    {
        m = a[0][0];
        b = a[0][1];
        c = a[0][2];
        d = a[1][0];
        e = a[1][1];
        f = a[1][2];
        g = a[2][0];
        h = a[2][1];
        k = a[2][2];
        det= (m*(e*k - f*h)) - (b*(d*k - f*g)) + (c*(d*h - e*g));
        printf("Determinant of the matrix is %d", det);
    }
    return 0;
}