#include <stdio.h>

int main()
{
    int i, prime, count = 0;
    for(i=10; i<= 50; i++)
    {
        prime =1;
        for(count=2; count<i; count++)
            {
            if(i%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}
