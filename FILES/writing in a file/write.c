#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Fpointer;
    char data[30]="Farhan is the best!";
    int length=strlen(data);

    Fpointer=fopen("farhan.txt","a");
    if(Fpointer==NULL)
    {

        printf("Unable to create the file");
    }
    else
    {
        for(int i=0;i<length;i++)
        {
            fputc(data[i],Fpointer);
        }
        printf("File created successfully");
        fclose(Fpointer);
    }


    return 0;
}
