
// sum of digits of a number

/*
#include <stdio.h>
int main()
{
   int n, sum = 0, r;

   printf("Enter a number\n");

   for (scanf("%d", &n); n != 0; n = n/10)
   {
      r = n % 10;
      sum = sum + r;
   }
   printf("Sum of digits of a number = %d\n", sum);

   return 0;
}
*/
// using while loop
/*
#include<stdio.h>
int main()
{
    int n, t, rem, sum = 0;
    scanf("%d", &n);
    t = n;

    while(t != 0)
    {
        rem = t%10;
        sum += rem;
        t = t/10;
    }
    printf("Sum : %d", sum);
    return 0;

}
*/
// using do while loop

#include<stdio.h>
int main()
{
    int t, n, remainder, sum = 0;
    scanf("%d", &n);
    t = n;
    do
    {
        remainder = t % 10;
        sum += remainder;
        t = t/10;

    }while(t != 0);
    printf("Sum : %d", sum);

    return 0;
}

