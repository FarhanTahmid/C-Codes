#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], arrO[n], arrE[n];

    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        printf("Enter element a[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe even elements are: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arrE[i]=arr[i];
            printf("%d ",arrE[i]);
        }
    }
    
    printf("\nThe odd elements are: ");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            arrO[i]=arr[i];
            printf("%d ",arrO[i]);
        }
    }
    return 0;
}