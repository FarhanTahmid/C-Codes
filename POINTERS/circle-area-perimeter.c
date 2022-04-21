#include<stdio.h>

void areaAndPeri(float *r)
{
    float a= 3.1416 * (*r) * (*r);
    float b= 2 * 3.1416 * (*r);
    printf("\nArea of the circle is: %.2f", a);
    printf("\nPerimeter of the circle is: %.2f", b);
}

int main()
{
    float radius;

    printf("\nEnter the radius of the circle : ");
    scanf("%f", &radius);

    areaAndPeri(&radius);
    
    return 0;
}