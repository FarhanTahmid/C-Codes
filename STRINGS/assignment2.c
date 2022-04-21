#include<Stdio.h>

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