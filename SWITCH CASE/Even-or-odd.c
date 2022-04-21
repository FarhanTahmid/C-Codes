#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number to check: \n");
    scanf("%d", &num);

    switch(num%2)
    {
    case 0:
        printf("The number is even.\n");
        break;
    case 1:
        printf("The number is odd.\n");
        break;

    }
    return 0;
}
