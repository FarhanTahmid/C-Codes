#include<stdio.h>

char* replaceChar(char *s, char x,char y)
{
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]==x)
        {
            s[i]=y;
        }
        i++;
    }

    return s;

}

int main()
{
    char string[30];

    printf("Enter the string:\n");
    fgets(string,30,stdin);
    fflush(stdin);
    char x;
    char y;
    printf("Enter the character you want to replace:\n");
    scanf("%c",&x);
    printf("Enter the character you want to replace with:\n");
    scanf(" ");
    scanf("%c",&y);

    printf("After swapping the string is:\n");
    printf("%s",replaceChar(&string[0],x,y));


    return 0;
}
