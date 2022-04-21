#include<stdio.h>
int main()
{
    FILE *ptr;
    char lineread[250];
    ptr=fopen("read10lines.txt","r");
    int i;
    if(ptr==NULL)
    {
        printf("Error occured while opening file!\n");
    }
    else
    {
        for(i=0;i<10;i++)
        {
            fgets(lineread,250,ptr);
            printf("%s\n",lineread);
        }
        printf("File read successfully!\n");
    }

    return 0;
}
