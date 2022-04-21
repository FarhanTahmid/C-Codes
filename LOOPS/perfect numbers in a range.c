#include<stdio.h>
int main()
{
    int max, min, sum = 0, n, i = 1;
    printf("Enter the minimum range: ");
    scanf("%d", &min);
    printf("Enter the maximum range: ");
    scanf("%d", &max);


    for(n=min; n<=max; n++)
    {
        while(i<n)
        {
            if(n%i==0                                                   //program not working properly
                    sum+=i;
                i++;
        }
        if(sum == n)
            printf("%d, ", n);
        else
            printf("No perfect numbers");

    }
    return 0;
}
