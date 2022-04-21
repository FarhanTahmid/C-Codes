#include<stdio.h>
int rfactorial(int);

int main()
{
   int num, fact;
   printf("\nEnter any integer number:");
   scanf("%d",&num);
   fact =rfactorial(num);
 
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int rfactorial(int n)
{
   if(n==0)
      return(1);
    
    else
    {
        return (n*rfactorial(n-1));
    }
    
}