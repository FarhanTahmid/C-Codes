#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100; i<=200; i++)
    {
        if(i%9==0)
        {
            sum+=i;
        }
    printf("%d + ", i);
    }
    printf("Sum: %d", sum);
    return 0;
}
