#include<stdio.h>
void pairDisplay(int arr[],int n,int s)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                printf("The pair is : %d, %d", arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int i,n,sum;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum you want to check:\n");
    scanf("%d",&sum);
    pairDisplay(arr,n,sum);
    return 0;
}