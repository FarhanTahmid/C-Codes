#include<stdio.h>
#include<math.h>
double func(double x)
{
    return 26+5*sin(2*x*3.14/180)-12*cos(2*x*3.14/180)+12 ;
}
int main()
{
    double xl,xu,xr ;
    int issame=0 , isneg=0 ;

    while(!issame)
    {
        printf("Enter the values for xl and xu\n") ;
        scanf("%lf %lf",&xl,&xu) ;
        if(xl!=xu)
            issame=1 ;
        else
            printf("xl and xu can't be the same value\n") ;

    }
    while(!isneg)
    {
        printf("%lf\n",func(xl)*func(xu)) ;
         if(func(xl)*func(xu)<0)
            isneg=1 ;
        else
          {
               printf("The value range is not fulfilled\n");
                printf("Enter the values for xl and xu\n") ;
        scanf("%lf %lf",&xl,&xu) ;

          }
    }
    while(func(xl)*func(xr)!=0)
    {
        xr=(xl+xu)/2 ;
        if(func(xl)*func(xu)<0)
            xu=xr ;
        else
            xl=xr;

    }
    printf("the value is &lf",xr) ;
}
