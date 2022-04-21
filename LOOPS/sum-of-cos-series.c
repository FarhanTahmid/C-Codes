#include<stdio.h>
 
int main()
{
    int i, n;
    float x,rad, sum=1, term=1;
     
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    rad=x*3.14159/180;
     
    for(i=1;i<=n;i++)
    {
        term=term*(-1)*rad*rad/(2*i*(2*i-1));
        sum=sum+term;
    }
     
    printf(" The value of Cos(%f) is : %.4f", rad, sum);
    
    return 0;
}