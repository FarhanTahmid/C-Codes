#include<stdio.h>
int main()
{
    int i, n, count=0;
    printf("Enter the number to check: \n");
    scanf("%d", &n);
    i=1;
    do
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }while(i<=n);

    if(count==2)
        printf("%d is a Prime number.", n);
    else
        printf("%d is not a Prime number.", n);


    return 0;
}
