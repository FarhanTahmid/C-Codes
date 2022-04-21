#include<stdio.h>
#include<math.h>
int main()
{

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if(number%10==0)
        printf("It is a multiple of 10");
    else
        printf("It is not a multiple of 10");

    return 0;
}

