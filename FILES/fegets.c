#include<stdio.h>
int main()
{
    FILE *ptr;
    char data[100];

    ptr=fopen("fgets.txt","r");
    if(ptr==NULL)
    {
        printf("Unable to read the file.\n");
    }
    else
    {
        while(!feof(ptr))
        {
            fgets(data,100,ptr);
            printf("%s",data);
        }
        printf("\n\n`Data read successfully from the file\n");
        fclose(ptr);
    }

    return 0;
}
