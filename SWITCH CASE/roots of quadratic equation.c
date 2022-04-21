#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    double disc;
    double rootValue0, rootValue1, rootValue2,imaginaryPart;

    printf("Please enter the quadratic equation in the form of ax^2+bx+c :\n(Enter a, b, &c): ");
    scanf("%lf%lf%lf", &a,&b,&c);

    disc = ((b * b) - (4 * a * c));


    switch(disc > 0)
    {
    case 1:
            rootValue1 = (-b + sqrt(disc)) / (2 * a);
            rootValue2 = (-b - sqrt(disc)) / (2 * a);
            printf("The root values of given quadractic functions are X1: %.2lf\nX2: %.2lf", rootValue1, rootValue2);
            break;
    case 0:
        switch(disc < 0)
        {
        case 1:
            rootValue1 = -b / (2 * a);
            rootValue2 = -b / (2 * a);
            imaginaryPart = (sqrt(-disc) / (2 * a));
            printf("The root values of given quadractic functions are X1: %.2lf + i(%.2lf)\nX2: %.2lf - i(%.2lf)", rootValue1,imaginaryPart, rootValue2,imaginaryPart);
            break;
        case 0:
            rootValue0 = (-b / (2 * a));
            printf("The root value of given quadratic function is X: %.2lf\n", rootValue0);
            break;
        }break;

    }

    return 0;
}
