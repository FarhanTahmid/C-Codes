#include<stdio.h>
#include<math.h>
int negationConjunctionReturn(int a,int b)
{
    /*if conjuction result turns out to be true it will print 1 as true and if the conjunction result turns out to be false it will print 0*/
    if (a==1 && b==1)
    {
        return 0;
    }
    else if (a==b)
    {
        return 0;
    }
    
    else if (a==0 && b==1)
    {
        return 1;
    }
    else if (a!=b)
    {
        return 1;
    }
    
    else if ( (a==1 && b==0))
    {
        return 1;
    }
    else if (a==0 && b==0)
    {
        return 1;
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers: A and B to test the negation of conjuction method!\n");
    printf("Enter A: ");
    scanf("%d", &a);
    printf("\nEnter B: ");
    scanf("%d", &b);    
    printf("%d",negationConjunctionReturn(a,b));

    return 0;
}