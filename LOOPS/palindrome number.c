#include<stdio.h>
int main()
{
    int i,n,t,r,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(t=n; n!=0; n=n/10)
    {
        r=n%10;
        sum=sum*10+r;
    }

    if(sum==t) //t=n declared above
        printf("Palindrome number.");
    else
        printf("Not a palindrome number.");

    return 0;
}
