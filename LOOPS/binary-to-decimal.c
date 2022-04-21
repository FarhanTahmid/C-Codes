#include<stdio.h>
#include<math.h>

int main()
{
    long int num;
    int dec=0,rem=0,place=0;
    printf("Please enter the binary number you want to convert: ");
    scanf("%li", &num);

    while (num!=0)
    {
        rem=num%10;
        if(rem==1)
        {
            dec=dec+(pow(2,place));
        }
        num=num/10;
        place++;
    }
    printf("Decimal of the given number is: %d", dec);

    return 0;
}