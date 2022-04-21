#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1==side2 && side2==side3 && side3==side1)
        printf("Equilateral Triangle.");
    else if(side1==side2 || side2==side3 || side3==side1)
        printf("Isosceles Triangle.");
    else
        printf("Scalene Triangle");

    return 0;
}
