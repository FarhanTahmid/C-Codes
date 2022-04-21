/*
#include<stdio.h>
int main()
{
    int n, i, sum=0;
    float avg;

    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements: ", n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    avg = (float)sum/n;
    printf("Sum=%d , Average=%.2f", sum, avg);

    printf("\nNumbers greater than average:\n");
    for(i=0; i<n; i++)
    {
        if(a[i]>avg)
            printf("%d,",a[i]);
    }


    return 0;
}
*/
#include<stdio.h>
void showArr(int *number,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ", number[i]);
    }
}
int main()
{

    int i,n;
    printf("Enter the size of the array: ");

    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    showArr(&arr[0],n);


    return 0;
}
