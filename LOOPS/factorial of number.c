
//c program to calculate factorial of a given number
//fact = 1 dhora must

#include<stdio.h>
int main()

{
    /*int i = 1, n, fact = 1;
    scanf("%d", &n);
    */
    /*for(i=1; i<=n; i++)
        fact *= i;
    printf("factorial: %d", fact);

    printf("\nUsing while loop");
    */

    /*while(i<=n)
    {
        fact *= i;
        i++;
    }
    printf("Using while loop);
    */

    printf("Using do while loop");
    do{
        fact*=i;
        i++;
    }while(i<=n);

    printf("\nFactorial : %d", fact);
    return 0;
}
