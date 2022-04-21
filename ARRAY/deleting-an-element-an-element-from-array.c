#include<stdio.h>
int main()
{
    int i,pos,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the position of element you want to delete: ");
    scanf("%d", &pos);
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    
    printf("\nArray elements after deleting the number: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}