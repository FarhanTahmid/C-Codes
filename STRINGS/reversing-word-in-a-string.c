#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="cat is running";
    char strRev[100];
    int place;


    puts(str);
    int b=strlen(str);
    place=0;

    int start=b-1;
    int end =b-1;
    int i;

    while(start>0)
    {
        if(str[start]==' ')
        {
            i= start+1;
            while(i<=end)
            {
            strRev[place]=str[i];
            i++;
            place++;
            }
            strRev[place++]=' ';
            end=start-1;
        }
        start--;
    }
    for (i=0;i<=end;i++)
    {
        strRev[place]=str[i];
        place++;
    }
    strRev[place]='\0';

    printf("Reverse: %s", strRev);

    return 0;
}