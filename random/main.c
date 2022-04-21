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

/*
#include<stdio.h>

int main()
{
    char name[50];
    int number;
    float decimal;


    printf("Enter a number:");
    scanf("%d", &number);
    printf("Your number is %d\n", number);

    printf("Enter a decimal number:");
    scanf("%f", &decimal);
    printf("Your decimal number is %f\n", decimal);

    printf("Enter your name: ");
    gets(name);
    printf("Your name is %c", name);


    return 0;
}
*/
/*

#include <stdio.h>

struct name{
    int number;
    char Name[50];
    float decimal;
};

int main(){
    struct name *ptr ,p;
    ptr = &p;

    printf("Enter a number: ");
    scanf("%d", &ptr->number);
    printf("Your number is %d\n", ptr->number);

    printf("Enter a decimal number:");
    scanf("%f", &ptr->decimal);
    printf("Your decimal number is %f\n",ptr->decimal);

    printf("Enter your name: ");
    scanf("%c", &ptr->Name);
    printf("Your name is %c \n", ptr->Name);

    return 0;
}
*/

/*
//using switch case

#include<stdio.h>

int main()
{
    int a, b;
    char optr;
    printf("type in your expression\n");
    scanf("%d %c %d", &a, &optr, &b);
    switch(optr){

        case '+':
            printf("%d\n", a+b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
    }
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    switch(a)
    {
    case 1:
        printf("January has 31 days");
        break;
    case 2:
        printf("February has 28 days");
        break;
    case 3:
        printf("March has 31 days");
        break;
    case 4:
        printf("April has 30 days");
        break;
    case 5:
        printf("May has 31 days");
        break;
    case 6:
        printf("June has 30 days");
        break;
    case 7:
        printf("July has 31 days");
        break;
    case 8:
        printf("August 31 days");
        break;
    case 9:
        printf("September has 30 days");
        break;
    case 10:
        printf("October has 31 days");
        break;
    case 11:
        printf("November has 30 days");
        break;
    case 12:
        printf("December has 31 days");
        break;
    }

    return 0;
}
*/


/*
//finding gcd values

#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    while(b%a!=0){
        t = b;
        b = a;
        a = t%a;
    }

    printf("gcd = %d", a);
    return 0;
}
*/

/*
//same execution of different loops
#include<stdio.h>
int main()
{

    int i;
    printf("For loop\n");

    for(i=0; i<3; i++)
    {
        printf("%d\n",i);

    }

    printf("\nWhile loop\n");
    int j = 0;
    while(j<3)                              //for , while, do-while loop
    {
        printf("%d\n", j);
        j++;
    }

    printf("\nDo while loop\n");
    int k = 0;
    do{
        printf("%d\n", k);
        k++;
    }while(k<3);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int n, sum = 0, array[100];
    scanf("%d",&n);
    int c;
    while(c<n)
    {
      scanf("%d", &array[c]);
      c++;
      sum=sum+array[c];
   }
   printf("%d\n", sum);
   return 0;
}
*/

/*
// c program to uppercase a letter

#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("Upper case is : %c", toupper(ch));
    return 0;
}
*/
//c program to print how many notes are there in a given amount
/*

*/
/*
#include <stdio.h>

void main()
{
	float x,sum,no_row;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);
}
*/
/*
#include<stdio.h>
int main()
{
    int a=14,b=3;
    double c=34.78;
    printf("1. %d\n", a=b++);
    printf("2. %d\n", a=5&6);
    printf("3. %d\n", a=(int)(c+0.5));
    printf("4. %d\n",-13%-5);
    printf("5. %c\n", 'a'+15);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, n, x, num, fact;
    double term, sum=0;

    printf("Enter the value of x:");
    scanf("%d", &x);

    printf("Enter the number of terms:");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        num= pow(x,i);
        fact=1;
        for(j=1; j<=i; j++)
        {
            fact=fact*j;
        }
        term= (double)num/(double)fact;
        sum=sum+term;
    }
    printf("Sum:%lf", sum);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    float a, b, avg;
    scanf("%f%f", &a, &b);
    avg = (a+b)/2;
    printf("MEDIA = %.5f", avg);
    printf("\n");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("Enter a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %f", avg);

    return 0;
}
*/
/*
//character array
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="cat is running";
    char strRev[100];
    int place;


    puts(str);
    int b=strlen(str);
    place=0;

    int start=b-1;
    int end =b-1;
    int i;

    while(start>0)
    {
        if(str[start]==' ')
        {
            i= start+1;
            while(i<=end)
            {
            strRev[place]=str[i];
            i++;
            place++;
            }
            strRev[place++]=' ';
            end=start-1;
        }
        start--;
    }
    for (i=0;i<=end;i++)
    {
        strRev[place]=str[i];
        place++;
    }
    printf("Reverse: %s", strRev);

    return 0;
}
*/

/*
#include<stdio.h>

int main()
{
    int i,k,sum;
    int list [7] = {12,78,56,78,90,15,34};

    for(i =0; i<7; i++)
    {
        printf("%d %d\n",i,list[i]);
    }
    printf("Enter a number :");
    scanf("%d",&k);

    int flag=0,count =0,present=0;
    for(i =0; i<7; i++)
    {
        if(list[i]==k)
        {
            count = count +1;
        }
    }
    if(count==0)
        printf("Not Found");
    else
        printf("number of occrence %d is: %d\n", k,count);

    for (i=0; i<7 ;i++)
    {
        present = 0;
        for (int j=0; j<i; j++)
        {
            if (list[i]==list[j])
            {
                present = 1;
                break;
            }
            if (present==0)
                printf("%d ", list[i]);

            }

    }
       return 0;

}
*/
/*
#include <stdio.h>
int main()
{
   int year;
   scanf("%d", &year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);


   return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float h;
    float area;
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("You entered the value of A %.2f\n",a);
    printf("Enter the value of H: ");
    scanf("%f", &h);

    area= 1.0/2.0*(a*h);
    printf("The area is %f",area);
    return 0;
}
*/

#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("%d",a);
    }
    else if (b>a && b>c)
    {
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    
}





























































