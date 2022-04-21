/*#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}
int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
*/

/*
//HOW TO SWAP VALUE AFTER DECLARING. HERE a IS 2 AND B IS 3 BUT AFTER SWAPPING IT BECOMES a=3, b=2
#include<stdio.h>
int main()
{
    int a=2, b=3, t; //DECLARIN A TEMPORARY VARIABLE TO ACTUALLY PRESERVE THE VALUE OF A
    t = a;
    a = b;
    b = t;
    printf("After swapping: a= %d and b= %d", a,b);
    return 0;
}
*/

/*
//SEEING ASCII VALUE OF CHARACTERS
#include <stdio.h>
int main()
{
    char chr ='c';
    printf("%d", (int)chr);

    return 0;
}

//MAKING A CHARACTER UPPERCASE AND LOWERCASE
*/

/*
#include <stdio.h>
int main()
{
    char chr ='c';
    printf("%d", (int)chr-32); //to uppercase a character +32 with the entered character and to lower case -32

    return 0;
}
*/

//lab challenge week 2 task 1:

/*
Determine whether an integer input is odd or even.
sample output:
9 is an ODD number.

#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is an EVEN number.", num);
    else
        printf("%d is an ODD number.", num);

    return 0;
}
*/

//lab challenge week 2 task 2:
//to find leap year

/*
#include <stdio.h>
int main()
{
   int year;
   scanf("%d", &year);

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
*/

//lab task week 2 task 3
/*create a program which indicates whether a given character input is digit, uppercase letter or lowercase letter

#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch>=65 && ch<=90)
    {
        printf("Uppercase Alphabet");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("Lowercase Alphabet");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Enter between 0 to 9 and A to Z");
    }

    return 0;
}
*/

//lab challenge week 2 task 3
//find the maximum number between 3 given numbers

/*
#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }

    printf("%d", max);

    return 0;
}
*/


//lab task w2 home 1
//check if a number is divisible by 2 or 3 or both or not divisible
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a%2==09 && a%3==0)
    {
        printf("Divisible by both");
    }
    else if(a%2==0 || a%3==0)
    {
        printf("Divisible by 2 or 3");
    }
    else
    {
        printf("Not Divisible by 2 or 3");
    }
    return 0;
}
*/








