#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter three numbers to compare: ");
    scanf("%d%d", &a, &b);
    switch(a>b)
    {
    case 0:
        printf("Maximum number: %d\n", b);
        printf("Minimum number: %d\n", a);
        break;
    case 1:
        printf("Maximum number: %d\n", a);
        printf("Minimum number: %d\n", b);
        break;
    }

    return 0;
}
