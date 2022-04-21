#include<stdio.h>

int main()
{
    int i,j,n, count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arrA[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter array element, A[%d]: ",i);
        scanf("%d", &arrA[i]);
    }
    printf("\nEntered Array element: ");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arrA[i]);
    }
    printf("\nSame elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arrA[i]==arrA[j])
                count++;
                printf("%d ", arrA[i]);  
        }
    }
    printf("\nThat means %d elements are same.",count);

    return 0;
}