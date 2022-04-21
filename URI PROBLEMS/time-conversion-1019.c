#include<stdio.h>
int main()
{
    int hour,min,sec,t;
    printf("Enter the time in second: ");
    scanf("%d",&t);

    hour=t/3600;
    min=(t-(3600*hour))/60;
    sec=(t-(3600*hour)-(60*min));

    printf("The given second converted in hour minutes and second is:\n");
    if(hour<=1)
    {
        printf("Hour: %d\n",hour);
    }
    else
    {
        printf("Hours: %d\n", hour);
    }
    if(min<=1)
    {
        printf("Minute: %d\n",min);
    }
    else
    {
        printf("Minutes: %d\n", min);
    }
    if(sec<=1)
    {
        printf("Secdond: %d\n",sec);
    }
    else
    {
        printf("Seconds: %d\n", sec);
    }
    return 0;

}
