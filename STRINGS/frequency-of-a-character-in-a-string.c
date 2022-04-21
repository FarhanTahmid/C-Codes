
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char string[100];
    char ch;
    printf("Enter the string:");
    fgets(string,100,stdin);
    fflush(stdin);
    printf("Enter the character you want to check: ");
    scanf(" %c",&ch);
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if(ch==string[i])
        {
            count++;
        }
    }
    printf("\nThe entered string was: %s\n", string);
    printf("The character '%c' was founded %d times in the string.\n",ch,count);
    return 0;
}
