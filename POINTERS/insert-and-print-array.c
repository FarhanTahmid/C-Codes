#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr=arr;
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr=arr;
    printf("Entered array elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}