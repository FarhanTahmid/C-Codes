//Write a program in C to display the multiplication table of a given integer.
/* Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/


#include<stdio.h>
int main()
{
    int i, n, value;
    printf("Enter the integer: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        value = n * i;
        printf("%d * %d = %d\n", n, i, value);
    }

    return 0;
}
