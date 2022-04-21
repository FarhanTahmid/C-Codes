#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter the string:\n");
    scanf(" ");
    gets(str);
    int i;
    for(i=0;str[i]!=0;i++)
    {
        printf("%c ", str[i]);
    }
    return 0;
}
