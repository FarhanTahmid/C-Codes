#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    int temp;
    printf("Enter the elements of the array:\n");

    for(i=0;i<n;i++)
    {
        printf("[%d]: ", i);
        scanf("%d ", &arr[i]);
    }
    printf("Array before bubble sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nArray after bubble sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}