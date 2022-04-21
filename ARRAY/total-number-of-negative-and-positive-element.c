#include<stdio.h>
int main()
{
    int i,j,k,n,posCount=0,negCount=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter element [%d]", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("\n%d: Negative number", arr[i]);
            negCount++;
        }
    }
    printf("\nNumber of negative numbers in array: %d", negCount);

    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("\n%d: Positive number", arr[i]);
            posCount++;
        }
    }
     printf("\nNumber of positive numbers in array: %d", posCount);

    return 0;
}