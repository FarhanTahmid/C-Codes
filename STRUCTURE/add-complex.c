#include <stdio.h>
typedef struct complex
{
    int real,imaginary;
}complex;

complex add(complex A, complex B);

int main()
{
    complex A, B, result;
    scanf("%d %d", &A.real, &A.imaginary);
    scanf("%d %d", &B.real, &B.imaginary);
    result = add(A, B);
    if(A.real,A.imaginary>=0)
        printf("%d+%di", result.real, result.imaginary);
    else
        printf("%d%di", result.real, result.imaginary);
    return 0;
}

complex add(complex A, complex B)
{
    complex n;
    n.real = A.real + B.real;
    n.imaginary = A.imaginary + B.imaginary;
    return (n);
}