#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter size of an array: ");
    scanf("%d", &num);
    int enterNum[num];
    int sum = 0,i;

    int j=-1;
    for(i=0;i<num;i++)
    {
        
        printf("\nEnter number a[%d]: ", j+1);
        j++;
        scanf("%d", &enterNum[i]);
        sum+=enterNum[i];
        
    }
    printf("Total Sum is = %d", sum);

    return 0;
}