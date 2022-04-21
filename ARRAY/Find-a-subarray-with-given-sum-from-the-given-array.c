#include<stdio.h>
void subArray(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        int sumUpto=0;
        for(int j=i;j<n;j++)
        {
            sumUpto+=arr[j];
            if(sumUpto==sum)
            {
                printf("[From index %d to index %d]: Sub array elements: { ", i, j);
                for (int k = i; k <= j; k++) 
	            {
                    printf("%d ", arr[k]);
                }
                printf("}\n");
            }
        }

    }
}

int main()
{
    int i,n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    int sum;
    printf("\nEnter the sum of array elements you want to check: ");
    scanf("%d",&sum);
    subArray(arr,n,sum);

    return 0;
}