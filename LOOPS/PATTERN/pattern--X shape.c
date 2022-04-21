#include<stdio.h>
int main()
{
    int row,column,row_no;
    printf("Enter an odd number to print the pattern: ");
    scanf("%d", &row_no);

    for(row=0; row<row_no; row++)
    {
        for(column=0; column<row_no;column++)
        {
            if((row==column)||(row+column==row_no- 1))
               printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
