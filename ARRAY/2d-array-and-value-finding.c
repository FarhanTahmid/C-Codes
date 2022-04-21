#include<stdio.h>
int main()
{
    int value,i,j;
    int a[3][3];
    printf("Enter the matrix value: ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    int found=0;
    printf("Enter the value: ");
    scanf("%d", &value);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==value)
            {
                found++;
            }
        }
    
    }
    if(found==1)
    {
        printf("Value found.");
    }
    else
    {
        printf("Value not found.");
    }
    
    return 0;
}