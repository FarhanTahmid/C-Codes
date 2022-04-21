//Fibonacci Series using Recursion
#include<stdio.h>
int rfib(int n)
{
   if (n==0)
    return 0;
   else if(n==1)
    return 1;
   else
    return rfib(n-1) + rfib(n-2);
}

int main ()
{
  int n = 9;
  printf("%d", rfib(n));
  return 0;
}

//it will only show the last number of the series
