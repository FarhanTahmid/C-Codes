#include<stdio.h>
int main()
{
    int i, j;
    int n, m; //while loop
    int k, l; // do while loop
    printf("\nUSING FOR LOOP\n");

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\nUSING WHILE LOOP\n");
    n=5;
    while(n>=1)
    {
        m=1;
        while(m<=n){
            printf("%d ", m);
            m++;
        }
        printf("\n");
        n--;
    }
    printf("\nUSING DO WHILE LOOP\n");

    k = 5;
    do{
        l=1;
        do{
            printf("%d ", l);
            l++;
        }while(l<=k);

        printf("\n");
        k--;
    }while(k>=1);

    return 0;
}

