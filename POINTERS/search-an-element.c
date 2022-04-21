#include<stdio.h>
void search(int *x, int *y,int size);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int a[size], n, i;
    int *pa, *pn;
    pa = &a[0], pn = &n;

    printf("Enter array element: ");
    for (i=0;i<size;i++)
    {
        scanf("%d",pa+i);
    }

    printf("Enter element for search: ");
    scanf("%d",pn);

    search(&a[0],pn,size);

    return 0;
}

void search(int *x, int *y,int size)
{
    int i, f=0;

    for (i=0;i<size;i++)
    {
        if ( *(x+i) == *y)
        {
            printf("%d Found at index %d\n",*y, i);
        }
        else
            continue;
    }

}