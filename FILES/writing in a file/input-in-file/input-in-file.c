
#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fpointer;
    char data[30];
    int length=strlen(data);

    Fpointer=fopen("farhan.txt","w");
    if(Fpointer==NULL)
    {

        printf("Unable to create the file");
    }
    else
    {
        printf("Enter a string to the file:\n");
        fgets(data,30,stdin);
        fputs(data, Fpointer);
        printf("File created successfully");
        fclose(Fpointer);
    }


    return 0;
}
