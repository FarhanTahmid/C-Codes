
#include<stdio.h>
#include<math.h>
void checkDuck(int num)
{
    int temp;
    temp=num;
    int ducknum=0;
    while(num>0)
    {
        if (num%10==0)
        {
            ducknum=1;
            break;
        }
        num=num/10;
    }
    if(temp > 0 && ducknum==1)
    {
        printf("%d = YES\n",temp);
    }
    else
    {
        printf("%d = NO\n", temp);
    }
}

int main()
{
    int arr[10];
    int temp;
    int flag;
    printf("Please enter the array elements:\n ");
    for (int i=0;i<10;i++)
    {
        printf("\n[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<10;i++)
    {
        checkDuck(arr[i]);
    }

    return 0;
}
