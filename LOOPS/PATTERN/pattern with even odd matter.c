//print a pattern like this.
/*
*
+++
*****
+++++++
*********

*/

#include<stdio.h>
int main()
{
    int row, i,j;
    printf("Enter how many rows you want: ");
    scanf("%d", &row);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=2*i-1; j++)
        {
            if(i%2==1)
            {
                printf("*");
            }
            else
            {
                printf("+");
            }
        }printf("\n");
    }

    return 0;
}
