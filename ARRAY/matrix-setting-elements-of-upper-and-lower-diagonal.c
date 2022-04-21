
#include<stdio.h>

void setDiagItems(int n,int m[n][n],int flag)
{
    int i,j;
    if(flag==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                m[i][j]=0;

            }
        }
    }
    else if(flag==0)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                m[j][i]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int n;
    printf("Please enter the size of the array: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements:\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    int flag;
    printf("Enter 1 to change the upper diagonal value or 0 to change the lower diagonal value: ");
    scanf("%d",&flag);
    setDiagItems(n,arr,flag);

    return 0;
}
