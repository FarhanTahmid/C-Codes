#include <stdio.h>


int main()
{
    int i, j, size, count;
    printf("Enter total number of digits in your student ID: ");
    scanf("%d", &size);
    int arr[size];
    int arr2[size];

    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i]=-1;
    }
    for(i=0; i<size; i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(j=i+1;j,size;j++)
            {
                if(arr[i]==arr2[j])
                {
                    count++;
                    arr2[j]=-1;
                }
            }
            arr2[i]=count;
        }
    }
    printf("The unique elements found in the student ID are: ");
    for(i=0;i<size;i++)
    {
        if (arr[i]!=-1)
        {
            if(arr2[i]==1)
            {
                printf("%d\n", arr[i]);
            }
            
        }
    }

    return 0;
}