//user inputs how many number he wants to add the numbers too. We have to print the sum of the input numbers.
/*
#include<stdio.h>
int main()
{
    int term, i;
    scanf("%d", &term);
    int temp, sum = 0;
    for(i = 0; i<term; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("Sum = %d", sum);

    return 0;
}
*/

// add numbers from a digit

/*
#include <stdio.h>
int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);

   return 0;
}
*/

#include <stdio.h>

int main()

{
    int age;
    char sts;
	printf ("Enter your  age = ");
	scanf("%d",&age);

    if (age > 59){
    printf("Enter your situation =");
    scanf("%c",&sts);
        if (sts== 'w' )
        printf("working senior");
        else
        printf("retired senior");
    }


	else

        if (age > 20)
        printf("Adult");
        else if (age>12)
        printf("Teen");
        else
        printf("Child");

 	return 0;
}


















