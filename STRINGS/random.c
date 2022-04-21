/*
#include<Stdio.h>
#include<string.h>

char* revstr(char* s)
{
    int i, count=0, j;
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    j=count;
    j = j - 1;

    for(int i=0; i<=j/2; i++)
    {

        char temp = s[i];
        s[i] = s[j-i];
        s[j-i] = temp;
    }

    s[j+1]='\0';
    return s;
}
int main()
{
    char s[100];
    printf("Enter the string you want to reverse: ");
    gets(s);
    char *P;
    P= revstr(s);
    printf("%s",P);
    return 0;
}
*/

/*
// SEARCHING CHARACTER AND WORDS IN A STRING
#include<Stdio.h>
#include<string.h>
int main()
{
    char string[30]="I have a dog";
    printf("Enter the word you want to search:\n");
    char found[30];
    char dfound;
    gets(found);
    char *search=NULL;
    char *search2=NULL;
    if(search=strstr(string,found))
    {
        printf("\n%s found in the string.", found);
    }
    else
    {
        printf("\n%s not found in the string.",found);
    }
    printf("\nEnter the character you want to search for the string:\n");
    scanf("%c", &dfound);
    if(search2=strchr(string,dfound))
    {
        printf("\n%c found in the string.", dfound);
    }
    else
    {
        printf("\n%c not found in the string.",dfound);
    }
    

    return 0;

}
*/


// TOKENIZING A STRING

#include<Stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    char s[10]=" -";
    char *token;
    printf("Enter the string you want to tokenize:\n");
    scanf(" ");
    gets(str);
    token=strtok(str,s);
    int count=0;
    while(token!=NULL)
    {
        printf("%s\n", token);
        token=strtok(NULL,s);
        count++;
    }
    printf("Entered courses are: %d", count);
    
    /*
    int i;
    char uppercase[50];
    for(i=0;(str[i]=(char)toupper(str[i]))!='\0';i++)
    {
        uppercase[i]=str[i];
    }
    printf("\nAfter converting: %s", uppercase);*/

    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char str1[10];
    char str2[10];
    char str3[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int length1=strlen(str1);
    int length2=strlen(str2);
    printf("The length of the string 1 is: %d\n",length1);
    printf("The length of the string 2 is: %d\n",length2);
    strcat(str1,str2);
    printf("%s\n",str1);
    strcpy(str3,str1);
    printf("%s\n",str3);
    
    return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

int countWord(char str[],int n)
{
    n=0;
    printf("Characters of the string is:");
    int i;
    for(i=0;i<strlen(str);i++)
    {
        printf("%c", str[i]);
        n++;
    }
    printf("Total number of characters is string : %d", n);
    return n;
}
int main()
{
    char str[100];
    printf("Please enter the string you want to check:\n");
    fgets(str,100,stdin);
    countWord

    return 0;
}
*/


