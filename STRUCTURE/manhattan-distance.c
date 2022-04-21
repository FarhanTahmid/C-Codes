#include <stdio.h>
struct Point
{
    float x, y;
};


double findDistance (struct Point a, struct Point b)
{
    double distance;
    distance = fabs(a.x - b.x) + fabs(a.y-b.y);
    return distance;
}



int main()
{
    struct Point a, b;
    scanf("%f %f", &a.x, &a.y);
    scanf("%f %f", &b.x, &b.y);
    printf("Manhattan Distance = %.2f\n", findDistance(a, b));


    return 0;
}