
#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("read-a-line-character-by-character.txt","r");

    if(ptr==NULL)
    {
        printf("Unable to open the file");
    }
    else
    {
        while(!feof(ptr))    //feof() reads the file through the last character and returns true if it reads the file through the last character
        {
            ch=getc(ptr);
            printf("%c",ch);
        }
    }

    return 0;
}
