#include<stdio.h>
int main()
{
    FILE *fpointer;
    char name[30];
    int age;
    /*
    printf("Enter your name:\n");
    fgets(name,30,stdin);               //this part is also right no worries
    fflush(stdin);
    printf("Enter your age:\n");
    scanf("%d", &age);
    */
    printf("Enter your name and age:");
    scanf("%s %d",name,&age);
    fpointer=fopen("fprintf.text","w");

    if(fpointer==NULL)
    {
        printf("Unknown error occured!");
    }
    else
    {
        fprintf(fpointer,"%s\t%d",name,age);
        printf("Data written successfully!");
        fclose(fpointer);
    }


    return 0;
}
