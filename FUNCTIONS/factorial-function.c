#include <stdio.h>
int factorial(int);

int main()
{
  int n;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);

  printf("Factorial: %d\n", factorial(n));

  return 0;
}

int factorial(int n)
{
  int c;
  int r = 1;

  for (c = 1; c <= n; c++)
    r = r * c;

  return r;
}