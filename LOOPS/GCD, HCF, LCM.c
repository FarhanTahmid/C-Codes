//C programming to print GCD / HCF and LCM:

#include<stdio.h>
int main()
{
    int i, n1, n2, gcd, lcm;
    scanf("%d%d", &n1, &n2);

    for(i=1; i<=n1 && i<=n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    lcm = (n1*n2)/gcd;
    printf("Gcd : %d\nLcm : %d", gcd, lcm);

    return 0;
}
