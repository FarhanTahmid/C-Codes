#include <stdio.h>

int main()
{
    int i,n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter a[%d]: ",i);
        scanf("%d", &a[i]);
    }
    printf("\nThe values in the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("The values in the array in reversed order: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
