#include<stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((a>b) && (a>c) && (a>d))
        printf("%d is maximum\n", a);
    else if((b>a) && (b>c) && (b>d))
        printf("%d is maximum\n", b);
    else if((c>b) && (c>a) && (c>d))
        printf("%d is maximum\n", c);
    else if((d>b) && (d>c) && (d>a))
        printf("%d is maximum\n", d);

    if((a<b) && (a<c) && (a<d))
        printf("%d is minimum\n", a);
    else if((b<a) && (b<c) && (b<d))
        printf("%d is minimum\n", b);
    else if((c<b) && (c<a) && (c<d))
        printf("%d is minimum\n", c);
    else if((d<b) && (d<c) && (d<a))
        printf("%d is minimum\n", d);

    return 0;
}