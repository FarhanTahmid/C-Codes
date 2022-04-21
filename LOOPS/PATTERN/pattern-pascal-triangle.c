#include <stdio.h>
int main()
{
    int row,col,space,rowNo,printN;
    printf("Enter how many rows you want in the triangle: ");
    scanf("%d", &rowNo);

    for (row=0;row<=rowNo;row++) 
    {
        for(space=0;space<(rowNo-row);space++)
        {
            printf("  ");
        }
        printN=1;
        for(col=0;col<=row;col++)
        {
            printf("  %d  ",printN);
            printN=printN*(row-col)/(col+1);
        }
        printf(" \n");
    }
    
    return 0;
}