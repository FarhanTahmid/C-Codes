#include<stdio.h>
#include<math.h>

int main()
{
    int num,dec=0,rem=0,place=0;
    printf("Please enter the octal number you want to convert: ");
    scanf("%d", &num);

    while(num!=0)
    {
        rem=num%10;
        dec=dec+rem*pow(8,place);
        num=num/10;
        place++;
    }
    printf("Decimal is %d", dec);

    return 0;
}