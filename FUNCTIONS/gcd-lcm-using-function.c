#include <stdio.h>
int gcd(int, int);

int main()
{
    int x,y,z;
    printf("Enter three integers\n");
    scanf("%d%d%d", &x, &y, &z);

    int r=gcd(x,y);
    int d=gcd(r,z);

    printf("Greatest common divisor of %d, %d and %d = %d\n", x, y, z, d);

    return 0;
}

int gcd(int n, int m)
{
    int a = n;
    int b = m;

    while (b != 0)
    {
    int t = b;
    b = a % b;
    a = t;
    }
    int gcd=a;
    return gcd;

}
