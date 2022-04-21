#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of the array: ");
    scanf("%d", &n);
    int arr1[n],arr2[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the a[%d] ellement for array number 1: ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nElements of the first array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\nAfter copying the elements of the array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}