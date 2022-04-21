#include<stdio.h>
void sumoftwo(int *a, int *b)
{
    int arraysum= (*a) + (*b);
    printf("Sum of two array: %d", arraysum);
    return;
}

int main()
{
    int n;
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements of the first array: ");
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        printf("Enter element [%d]: ",i);
        scanf("%d", &arr1[i]);
        sum+=arr1[i];
    }
    int m;
    printf("Enter the size of the second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the element of the second array: ");
    int j,sum2=0;
    for(j=0;j<m;j++)
    {
        printf("Enter element [%d]: ",j);
        scanf("%d", &arr2[j]);
        sum2 += arr2[j];
    }
    sumoftwo(&sum, &sum2);

    return 0;
}