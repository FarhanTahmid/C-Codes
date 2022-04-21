#include<stdio.h>
int main()
{
    int num,oct=0,rem=0,place=1;
    printf("Enter a decimal number to convert in octal :");
    scanf("%d", &num);

    while (num!=0)
    {
        rem=num%8;
        oct=oct+rem*place;
        num=num/8;
        place=place*10;
    }
    printf("Octal number is: %d", oct);
    
    return 0;
}