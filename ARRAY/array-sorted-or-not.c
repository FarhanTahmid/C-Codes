#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter N:\n");
    scanf("%d", &n);
    int arr[n];
    int i;
    int asc=0;
    int desc=0;
    printf("\nPlease Enter array elements:\n ");
    for(i=0;i<n;i++)
    {
        printf("[%d]\n",i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]<arr[i+1])
        {
            desc=1;
        }
        else if (arr[i]>arr[i+1])
        {
            asc=1;
        }
           
    }
    if (asc=0)
    {
        printf("\nThe array is sorted in ascending Order.\n");
    }
    else if(desc=0)
    {
        printf("\nThe array is sorted in descending order.");
    }
    else if (asc==0 || desc==0)
    {
        printf("\nThe array is not sorted\n");
    }
    
    return 0;
}