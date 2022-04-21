#include <stdio.h>

int main()
{
    int n1,n2,count = 0;
    int i;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);

    for(i=n1; i<= n2; i++)
    {
        if(i%4==0 && i%7==0)
        count++;
    }
    printf("There are such %d numbers",count);
    return 0;
}
