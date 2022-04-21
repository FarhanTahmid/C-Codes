#include<stdio.h>
int main()
{
    int i, max=0,secondMax=0,size;       //initializing max=0 is a must
    printf("Please enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements of the array: ");

    for(i=0;i<size;i++)
    {
        printf("\nEnter element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            secondMax=max;
            max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]<max)
        {
            secondMax=arr[i];
        }
    }

    printf("The largest element of the array: %d\n", max);
    printf("The second largest element of the array: %d\n", secondMax);
    
    return 0;
}