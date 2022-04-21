#include<stdio.h>
int main()
{

    FILE *ptr;
    int age;
    char name[30];
    ptr=fopen("fscanf.txt","r");
    if(ptr==NULL)
    {
        printf("Unable to open the file\n");

    }
    else
    {
        fscanf(ptr,"%s%d",name,&age);
        printf("%s\t%d\n",name,age);
        printf("Data read successfully!");

    }
    return 0;
}
