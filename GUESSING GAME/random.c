#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int randomNumber=rand() % 100 + 1;
    printf("The random number is: %d", randomNumber);
}
