#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int n, i;
    float sum=0, v, d, g;
    printf("Enter term, n = ");
    scanf("%d", &n);

    printf("Series: 1+");

    for(i=2; i<=n; i++)
    {

        v=2*i-1;
        d=pow(2*i-1,2*i-1);
        printf("1/%.0f^%.0f",v ,v);
        if(i<n)
        {
            printf("+");
        }
        g=1/d;
        sum= sum+g;


    }
    printf("\nSummation of the series: %f", sum+1);
    return 0;
}
