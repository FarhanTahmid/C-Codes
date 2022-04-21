#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr;
    int n,i;
    printf("Enter the number of the character: ");
    scanf("%d", &n);
    ptr=(char*)malloc(n*sizeof(char));
    /*
    printf("Address of the allocated memory:\n");
    for(i=0;i<n;i++)
    {
        printf("%p\n", &ptr+i);
    }
    */
    if(ptr != NULL)
    {
        printf("Enter the string:\n");
        scanf(" ");
        gets(ptr);
        printf("Inputted text: %s\n",ptr);
    }
    else
    {
        exit(0);
    }
    free(ptr);
    return 0;
}