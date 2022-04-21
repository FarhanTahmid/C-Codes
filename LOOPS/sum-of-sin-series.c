#include<stdio.h>

int main()
{
    int i, n;
    float x, rad, sum, term;

    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    rad=x*3.14159/180;
    term=rad;
    sum=rad;
     
    for(i=1;i<=n;i++)
    {
        term=(term*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+term;
    }
     
    printf(" The value of Sin(%f) = %.4f",rad,sum);
    
    return 0;
}