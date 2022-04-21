#include<stdio.h>

void arrRotate(int *arr1,int n,int rotateIndex)
{
    int i;
    for(i=0;i<rotateIndex;i++)
    {
        int j;
        int temp=arr1[0];
        for(j=0;j<n-1;j++)
        {
            arr1[j]=arr1[j+1];
        }
    arr1[j]=temp;
    }
    return;
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
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int index;
    printf("\nEnter the index from where you want to rotate the array:\n");
    scanf("%d", &index);
    arrRotate(arr,n,index);
    printf("After rotating the array from %dth index:\n",index);
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}