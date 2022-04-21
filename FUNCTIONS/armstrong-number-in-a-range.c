#include <stdio.h>
 int  checkarmstrongnumber(int n)
{
int tem,r,sum=0;
  tem = n;
  while(tem!=0)
  {
      r=tem%10;
      sum = sum +r*r*r;
      tem=tem/10;
  }

 return (n==sum);
  }

int main()
{

     int n1,n2,c=0;
    scanf("%d %d",&n1,&n2);
    for( int i =n1; i<=n2; i++)
    {
       if(checkarmstrongnumber(i))
        { c++;
         if (c==1)
         {printf("%d",i);
         }
         else
         {
             printf(", %d",i);
         }
        }
    }

    return 0;
}