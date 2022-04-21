#include<stdio.h>
int getNum(int f);
int getSquare(int n);
int getCube(int i);

int main()
{
    int a,b,c;
    scanf("%d", &c);
    int resultC=getNum(c);
    int resultSq=getSquare(c);
    int resultCube=getCube(c);
    printf("Square: %d", resultSq);
    printf("\nCube: %d", resultCube);

    return 0;
}

int getNum(int f)
{
    return f;
}

int getSquare(int n)
{
    return n*n;
}

int getCube(int i)
{
    return i*i*i;
}
