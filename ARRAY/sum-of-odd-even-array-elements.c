#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter size of an array: ");
    scanf("%d", &num);
    int enterNum[num];
    int sumO = 0,sumE = 0,i;

    int j=-1;
    for(i=0;i<num;i++)
    {
        
        printf("\nEnter number a[%d]: ", j+1);
        j++;
        scanf("%d", &enterNum[i]);
        if(enterNum[i]%2==0)
        {
            sumE+=enterNum[i];
        }
        else if(enterNum[i]%2!=0)
        {
            sumO+=enterNum[i];
        }
    }
    printf("\nSum of even numbers are = %d", sumE);
    printf("\nSum of odd numbers are = %d", sumO);


    return 0;
}