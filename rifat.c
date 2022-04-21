/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float h;
    float area;
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of H: ");
    scanf("%f", &h);

    area= 1.0/2.0*(a*h); // area=1/2*(height*length)

    printf("The area is %f\n",area);
    printf("The value of a is %.2f, the value of h is %.2f, the area is %.2f",a,h,area);
    return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    printf("please enter the value of A: ");
    scanf("%d", &a);
    printf("please enter the value of b: ");
    scanf("%d", &b);

    printf("The sum of A and B is %d\nThe average of A and B is %.3f",a+b,(a+b)/2.0);

    return 0;
}
*/

//centigrade to farenheit

#include<stdio.h>
#include<conio.h>

void main()
{
    float celsius,fahrenheit;

    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);

    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);

    getch();
}
