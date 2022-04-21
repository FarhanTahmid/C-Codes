#include<stdio.h>
int main()
{
    int i,value,pos,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d", &arr[i]);
    }
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEnter the value you want to add int the matrix and the popsition: ");
    scanf("%d%d", &value, &pos);
    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    
    printf("\nArray elements after insertion of the number: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}