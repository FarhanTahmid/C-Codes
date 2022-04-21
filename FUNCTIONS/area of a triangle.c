#include<stdio.h>

float getBase()
{
    float b;
    printf("Enter base: ");
    scanf("%f", &b);
    return b;
}
float getHeight()
{
    float h;
    printf("Enter height: ");
    scanf("%f", &h);
    return h;
}
float getAreaTriangle(float x,float y)
{
    return (1.0/2.0 * (x*y));
}
int main()
{
    float i,j;
    i=getBase();
    j=getHeight();
    float area=getAreaTriangle(i,j);

    printf("The base is: %.1f cm and height is: %.1f cm \n",i, j );
    printf("The area of the triangle is : %.1f", area);

    return 0;
}
