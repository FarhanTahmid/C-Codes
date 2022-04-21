#include<stdio.h>
int main()
{
    int i, min=2147483647,secondMin=2147483647,size;       //initializing min=0 is a must
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
        if(arr[i]<min)
        {
            secondMin=min;
            min=arr[i];
        }
        else if(arr[i]<secondMin && arr[i]>min)
        {
            secondMin=arr[i];
        }
    }

    printf("The smallest element of the array: %d\n", min);
    printf("The second smallest element of the array: %d\n", secondMin);
    
    return 0;
}