#include<stdio.h>
int checkPerfectNumbers(int);

int main()
{
    int i,n1,n2;
    scanf("%d%d", &n1,&n2);
    int count=0;
    printf("Perfect numbers: ");

    for(i=n1;i<=n2;i++)
    {
        if (checkPerfectNumbers(i))
        {
            if(count==1)
            {
                printf(",%d",i);
            }
            else
            {
                printf("%d",i);
            }
            count++;   
        }
    }

    return 0;
}

int checkPerfectNumbers(int a)
{
    int i,sum=0;
    for(i=1; i<=a/2; i++)
    {
        if(a%i==0)
            sum+=i;

    }
    if(sum==a)
        return 1;
    else
        return 0;


}
