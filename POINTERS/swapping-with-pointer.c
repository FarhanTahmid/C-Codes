#include <stdio.h>
void swap(int *n1, int *n2);

int main()
{
    int num1 = 5, num2 = 10;
    printf("\nBefore swap num1: %d", num1);
    printf("\nBefore swap num2: %d", num2);
    // address of num1 and num2 is passed
    swap(&num1, &num2);

    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    
    printf("\nAfter swapping num1 = %d", *n1);
    printf("\nAfter swapping num2 = %d", *n2);
    return;
}