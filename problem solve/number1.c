#include<stdio.h>>
#include<math.h>
int main()
{
    double Xl,Xu;
    double Xr;
    double fXl,fXu,fXr;
    int i;
    double calcerror;
    double xrold=0;
    double rootvalue;

    printf("Enter the lower guess for the root value.\nEnter numbers between -200 to -100\n");
    scanf("%lf", &Xl);
    printf("Enter the higher guess for the root value.\nEnter numbers between 100 to 200\n");
    scanf("%lf",&Xu);
    if(Xl>=-100 && Xl<=-200)
    {
        printf("Enter the value of lower root in the interval of -200 and -100");
        exit(0);
    }
    else if(Xu>=200 && Xu<=100)
    {
        printf("Enter the value of upper root in the interval of 100 to 200");
        exit(0);
    }
    /*
    else if(Xl+Xu==0);
    {
        printf("Enter different values for lower and higher guess");
        exit(0);
    }
    */
    for(i=0;i<10;i++)
    {
        Xr= (Xl+Xu)/2;
        fXl=(26*Xl)+(5*sin(2*Xl))-(12*(cos(2*Xl)))+12;
        fXr=(26*Xr)+(5*sin(2*Xr))-(12*(cos(2*Xr)))+12;
        if(fXl*fXr<0)
        {
            Xu=Xr;
        }
        else if(fXl*fXr>0)
        {
            Xl=Xr;
        }
        else if(fXl*fXr==0)
        {
            printf("The root value for the function is X= %.2lf cause fxl*fxr=0", Xr);
            break;
        }
        Xr=rootvalue;
    }
    printf("The root value for the function is X= %.2lf",rootvalue);


    return 0;
}
