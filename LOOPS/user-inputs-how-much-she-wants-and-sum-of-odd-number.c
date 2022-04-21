#include<stdio.h>
int main()
{
    int n,i,a,sum=0,count=0;
    float avg;
    printf("Please enter how many integers you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2!=0)
        {
            sum+=a;
            count++;
            avg=sum/count;
            
        }
    }
    printf("Average of odd numbers: %f", avg);

    return 0;
}