#include<stdio.h>
int checkOddEven(int);

int checkOddEven(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(checkOddEven(x))
        printf("Number is odd.");
    else
        printf("Number is even.");

    return 0;
}
