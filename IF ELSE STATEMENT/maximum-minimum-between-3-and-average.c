#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    int max_range;
    int min_range;
    if (a<b && a<c)
        min_range=a;
    else if(b<a && b<c)
        min_range=b;
    else
        min_range=c;

    if (a>b && a>c)
        max_range=a;
    else if(b>a && b>c)
        max_range=b;
    else
        max_range=c;

    printf("Range = %d <-> %d", min_range,max_range);
    float average;
    average= ((float)a+(float)b+(float)c)/3;
    printf("\nAverage = %f",average);
    return 0;
}
