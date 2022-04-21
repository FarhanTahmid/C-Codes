#include<stdio.h>
long int binaryConv(long int);
long int reverseBinary(long int);

int main()
{
    int n;
    scanf("%d", &n);
    long int d = binaryConv(n);
    long int e = reverseBinary(d);
    printf("Reverse binary: %li",e);
    return 0;
}

long int binaryConv(long int a)
{

    long int bin = 0;
    int rem, i = 1;
    while (a != 0) {
        rem = a % 2;
        a /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

long int reverseBinary(long int b)
{
    int i,rem,rev=0;
    while(b!=0)
    {
        rem=b%10;
        rev=rev*10+rem;
        b/=10;
    }
    return rev;
}
