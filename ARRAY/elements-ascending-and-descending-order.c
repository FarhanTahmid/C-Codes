#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
       printf("Enter element no. a[%d]", i);
       scanf("%d", &arr[i]); 
    }
    printf("The elements in the array: ");
    for(i=0;i<n;i++)
    {
       printf("%d ", arr[i]); 
    }
    
    printf("\nIn ascending order: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nIn descending order: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
