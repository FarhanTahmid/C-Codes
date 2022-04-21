#include<stdio.h>

int getNum(int a)
{
    printf("Please enter a number: ");
    scanf("%d", &a);
    return a;
}
int getSquare(int b)
{
    return b*b;
}
int getCube(int d)
{
    return d*d*d;
}
int main()
{
    int sq,i,cu;
    int x= getNum(x);
    printf("VALUE:\tSquare of value:\tCube of value:\n");
    for(i=1;i<=x;i++)
    {
        sq=getSquare(i);
        cu=getCube(i);
        printf("%d\t\t%d\t\t\t%d\n",i,sq,cu);
    }


    return 0;
}