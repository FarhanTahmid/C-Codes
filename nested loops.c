//Write a program in C to display the pattern like right angle triangle using an asterisk.
/*
The pattern like :

*
**
***
****
*/

/*
#include<stdio.h>
int main()
{
    int i, j, rows;
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)// this for loop is for making the rows
    {
    for(j=1; j<=i; j++)
        printf("*"); //this for loop is to print the aestriks
    printf("\n"); //this is very important...its with the first for loop and actually makes the lines and thats what makes the right triangle!

    }
    return 0;
}
*/


//Write a program in C to display the pattern like right angle triangle with a number.
/*
The pattern like :

 1
 22
 333
 4444
 */

 /*
#include<stdio.h>
int main()
{
    int i, j, rows;
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
*/

//Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
/*
The pattern like :

 1
 22
 333
 4444
 */

/*
#include<stdio.h>
int main()
{
    int i, j, row;
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", i);
        printf("\n");
    }
    return 0;
}
*/

//Write a program in C to make such a pattern like right angle triangle with number increased by 1
/*
The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10
*/
/*
#include<stdio.h>
int main()
{
    int i, j, row, k=1;
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", k++);
        }

        printf("\n");
    }
    return 0;
}
*/


#include<stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Please enter the number you want to check: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("Number of factors: %d", count);

    return 0;
}







