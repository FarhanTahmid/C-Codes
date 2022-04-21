#include<stdio.h>
#include<math.h>

double main()
{
    double x1,y1;
    double x2,y2;
    printf("Enter first points as (x1,y1): ");
    scanf("%lf%lf", &x1,&y1);
    printf("Enter first points as (x2,y2): ");
    scanf("%lf%lf", &x2,&y2);

    double i=x2-x1;
    double j=y2-y1;
    double d= (i*i)+(j*j);
    double distance=sqrt(d);
    printf("The distance between two given point is: %lf", distance);

    return 0;
}