#include<stdio.h>
int main()
{

    int a=0, b=1, terms, i,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        terms=a + b;
        printf("%d + ", terms);
        a=b;
        b=terms;
    }
    return 0;
}
