#include<stdio.h>
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}
int main()
{
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], copyarr[n];
    int *arrptr=arr;
    int *copyarrptr=copyarr;
    int *endindex;

    printf("Enter the array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", (arrptr+i));
    }
    
    endindex=&arr[n-1];
    
    printf("Entered array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", *(arrptr+i));
    }
    while(arrptr <= endindex)
    {
        *copyarrptr=*arrptr;
        arrptr++;
        copyarrptr++;
    }
    printf("Copied array: ");
    printArray(copyarrptr,n);
    
    return 0;
}