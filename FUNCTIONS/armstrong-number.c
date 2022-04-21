#include <stdio.h>

int check_armstrong(int);
int power(int, int);

int main () {
  int l,n;

  printf("Input a number\n");
  scanf("%d", &n);

  if (check_armstrong(n) == 1)
    printf("%d is an armstrong number.\n", n);
  else
    printf("%d isn't an armstrong number.\n", n);

  return 0;
}

int check_armstrong(int n) {
  int sum = 0, t;
  int rem, dig= 0;

  t = n;

  while (t != 0) {
    dig++;
    t = t/10;
  }

  t = n;

  while (t != 0) {
    rem = t%10;
    sum = sum + power(rem, dig);
    t = t/10;
  }

  if (n == sum)
    return 1;
  else
    return 0;
}

int power(int n, int r) {
  int c;
  int p = 1;

  for (c = 1; c <= r; c++)
    p = p*n;

  return p;
}






















