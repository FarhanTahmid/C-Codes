
#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fpointer;
    Fpointer=fopen("farhan.txt","w");
    if(Fpointer==NULL)
    {

        printf("Unable to create the file");
    }
    else
    {

        printf("File created successfully");
        fclose(Fpointer);
    }


    return 0;
}
