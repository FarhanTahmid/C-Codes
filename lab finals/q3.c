#include<stdio.h>
int even_sum(int *arr,int size);
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int result=even_sum(&arr[0],n);
    printf("Sum of even numbers:%d",result);

    return 0;
}

int even_sum(int *arr,int size)
{
    int j;
    int sum=0;
    for(j=0;j<size;j++)
    {
        if(arr[j]%2==0)
        {
            sum+=arr[j];
        }
    }

    return sum;
}
