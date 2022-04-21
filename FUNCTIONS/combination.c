#include <stdio.h>

int fact(int n);
int combination(int a, int b);

int main()
{
 int a,r;

  	printf("Enter a number n\n");
  	scanf("%d",&a);
    printf("Enter a number r\n");
  	scanf("%d",&r);
  	int resultfactorial=fact(a);
  	int resultvalue=combination(a,r);

    printf("Value of %dC%d = %d\n",a,r,resultvalue);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int combination(int a, int b)
{
    int ncr=fact(a)/(fact(b)*fact(a-b));
    return ncr;
}
