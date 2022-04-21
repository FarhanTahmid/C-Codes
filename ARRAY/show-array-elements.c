#include <stdio.h>
int main()
{
 
    int n;
    printf("Enter how many elements you want in the array: ");
    scanf("%d", &n);

    int array[n];
    int i;
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &array[i]); 
    }
            
    int j=-1;
    for (i = 0; i < n; i++)
    {
        
        printf( "a[%d]: %d\n",j+1, array[i]) ;
        j++;
    }        
    
    return 0;    
}