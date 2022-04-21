#include <stdio.h>

void maximum_element(int arr[],int n)
{
    int i;
    int max_element=arr[0];
    int max_element_index=0;

    for (i = 1; i < n; i++)
    {
        if (arr[i]>max_element)
        {
            max_element=arr[i];
            max_element_index=i+1;
        }
    }
    printf("Maximum element in Array: %d and the index is %d", max_element,max_element_index);

}
void minimum_element(int arr[], int n)
{
    int i;
    int min_element=arr[0];
    int min_element_index=0;

    for (i = 1; i < n; i++)
    {
        if (arr[i]<min_element)
        {
            min_element=arr[i];
            min_element_index=i+1;
        }
    }
    printf("Minimum element in Array: %d and the index is %d", min_element,min_element_index);
}
int main()
{
    int i, n;

    printf("Enter how many elements you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; ++i)
    {
        printf("[%d]",i);
        scanf("%d", &arr[i]);
    }
    char choice;
    printf("Enter X to find maximum element in the array or ente N to find the minimum element and its index: \n");
    gets(stdin);
    scanf("%c",&choice);
    if(choice=='x' || choice=='X')
    {
        maximum_element(arr,n);
    }
    else if(choice=='n' || choice=='N')
    {
        minimum_element(arr,n);
    }
    return 0;
}
