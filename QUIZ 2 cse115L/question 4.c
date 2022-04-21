#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;
    double b, sum = 0;
    printf("Enter term, n = ");
    scanf("%d", &n);

    printf("Series: ");
    i = 1;
    while( i<=2*n){
        if(i==1){
            printf("1 +");
        }
        if(i>1){
            printf(" 1/%d^%d +", i, i);
        }
        b = 1.0/pow(i,i);
        sum+= b;
        i=i+2;

    }
    printf("\nSummation of the series: %lf", sum);
    return 0;
}
