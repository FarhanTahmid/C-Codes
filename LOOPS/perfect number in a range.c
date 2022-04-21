#include<stdio.h>
int main()
{
    int i, start,end,j, sum=0;
    scanf("%d%d", &start,&end);
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
            printf("%d ",i);
    }
    printf("\n");

    return 0;
}
