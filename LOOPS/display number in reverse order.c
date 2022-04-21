#include<stdio.h>
int main()
{
    int num, r, t, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(t=num; num!=0; num=num/10)
    {
        r=num%10;
        sum=sum*10+r;
    }
    printf("Reverse Number : %d", sum);

    return 0;
}
