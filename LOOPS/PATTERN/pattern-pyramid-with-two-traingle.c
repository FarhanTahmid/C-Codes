#include<stdio.h>
int main()
{
    int r,c,s,n,count=0;
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(s=1; s<=n-r; s++)
        {
            printf("   ");
        }
        for(c=1;c<=r;c++)
        {
            printf(" %d ",c);
        }
          for(c=r-1;c>=1;c--)
          {
              printf(" %d ",c);
          }
        printf("\n");
    }
    return 0;
}