#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input number of rows from user */
    scanf("%d", &rows);


    for(i=1; i<=rows; i++)
    {
        /* loop to print trailing spaces */
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }


        /* loop to stars and center spaces */
        for(j=1; j<=rows; j++)
        {
            if(i==1 || i==rows || j==1 || j==rows)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
