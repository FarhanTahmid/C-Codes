#include<stdio.h>
#include<math.h>

int getNum(int a)
{
    printf("Please enter the value of x:");
    scanf("%d", &a);
    return a;
}

int getX5(int b)
{
    int c=pow(b,5);
    return c;
}

int getDifferenceOfTwo(int d)
{
    int e=pow(d,5);
    int f=pow(d,6);
    int g=(f-e);
    return g;
}

double getSinOfDiffernece(double h)
{
    double i=(getDifferenceOfTwo(h));
    double y=sin(i);
    return y;
}

int main()
{
    int k,l;
    double m;
    int j,x;
    x=getNum(x);
    printf("Value of x:\tx^5\t(x^6-x^5)\tsin(x^6-x^5)\n");
    for(j=2;j<=x;j++)
    {
        k=getX5(j);
        l=getDifferenceOfTwo(j);
        m=getSinOfDiffernece((double)j);
        printf("%d\t\t%d\t  %d\t\t %.2lf\n",j,k,l,m);
    }
    return 0;
}