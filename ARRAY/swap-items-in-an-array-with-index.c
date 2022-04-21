#include<stdio.h>
void swapItems(int *a,int i, int j)
{
    int temp;

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int l;
    for(l=0;l<n;l++)
    {
        printf("[%d]: ",l);
        scanf("%d", &arr[l]);
    }
    printf("Array elements before swapping:\n");
    for(l=0;l<n;l++)
    {
        printf("%d ",arr[l]);
    }
    int i,j;
    printf("\nEnter the indexes you want to swap: ");
    scanf("%d%d",&i,&j);

    swapItems(&arr[0],i,j);



    return 0;
}
