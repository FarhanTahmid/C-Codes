#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a > b) && (a > c) && (a > d))
        printf("\n%d is maximum", a);
    else if((b > a) && (b > c) && (b > d))
        printf("\n%d is maximum", b);
    else if((c > b) && (c > a) && (c > d))
        printf("\n%d is maximum", c);
    else if((d > b) && (d > c) && (d > a))
        printf("\n%d is maximum", d);

    if((a<b) && (a<c) && (a<d)){
        printf("%d is minimum", a");
    }

    else if((b<a) && (b<c) && (b<d))
        printf("\n%d is minimum", b");
    else if((c<b) && (c<a) && (c<d))
        printf("\n%d is minimum", c");
    else if((d<b) && (d<c) && (d<a))
        printf("\n%d is minimum", d");
    return 0;
}
