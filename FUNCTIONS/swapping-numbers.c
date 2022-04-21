#include<stdio.h>
void swappingNumber(int,int);
int main()
{
    int x, y;
    scanf("%d%d", &x,&y);

    swappingNumber(x,y);


    return 0;
}

void swappingNumber(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping the value is, a: %d, b: %d", a,b);
}
