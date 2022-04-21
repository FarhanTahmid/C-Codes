#include<stdio.h>
int main()
{
    int i,j,n;
    int a,b;//while loop
    int g,e;//do while loop
    scanf("%d", &n);
    printf("\n");

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
            printf("%d", i);
        printf("\n");
    }
    printf("\n");
    printf("USING WHILE LOOP\n");
    a=1;
    while(a<=n){
        b=1;
        while(b<=a)
        {
            printf("%d", a);
            b++;
        }
        printf("\n");
        a++;
    }
    printf("\n");
    printf("USING DO WHILE LOOP\n");
    g=1;
    do{
        e=1;
        do{
            printf("%d", g);
            e++;
        }while(e<=g);
        printf("\n");
        g++;
    }while(g<=n);

    return 0;
}
