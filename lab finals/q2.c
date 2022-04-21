#include <stdio.h>

struct Complex{
    int real;
    int imaginary;
};

void sum(struct Complex a, struct Complex b);

int main()
{
    struct Complex x;
    struct Complex y;
    scanf("%d%d",&x.real,&x.imaginary);
    scanf("%d%d",&y.real,&y.imaginary);
    sum(x,y);
    return 0;
}

void sum(struct Complex a, struct Complex b){
    int m, n;
    m = a.real+b.real;
    n = a.imaginary+b.imaginary ;
    if(n>0)
    {
        printf("%d+%di",m,n);
    }
    else
    {
        printf("%d%di",m,n);
    }
}
