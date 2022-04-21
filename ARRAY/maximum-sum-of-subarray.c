#include<stdio.h>

int subArraySum(int arr[], int n)
{
    int i,j,k;
    int sum,maxsum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=i;k<j;k++)
            {
                sum+=arr[k];
            }
            if(sum>maxsum)
            {
                maxsum=sum;
            }
        }
    }
    return maxsum;
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
        printf("[%d]", i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    //int *ptr=&arr[i];
    int maximumsum=subArraySum(arr,n);
    printf("\nMaximum sum of the sub array is: %d",maximumsum);

    return 0;
}
