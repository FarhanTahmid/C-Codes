#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    double sum=0;
    double series_d_n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n;i++)
    {
        series_d_n= 1/ pow(i,i);
        if(i%2==0)
            sum= sum + series_d_n;
        else
            sum= sum - series_d_n;
    }
    printf("Sum is %.6f",sum);

    return 0;
}