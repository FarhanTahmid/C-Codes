#include<stdio.h>
#include<string.h>

int main()
{
   
    char str[100];
    printf("Enter the string :\n");
    fgets(str,100,stdin);
    fflush(stdin);
    int length=strlen(str);
    int i;
    int flag;
    for(i=0;i<length;i++)
    {
        if(str[i-1]<str[i-2])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if (flag==0)
    {       
        printf("ORDERED");
    }
    else if (flag==1)
    {
        printf("UNORDERED");
    }

    return 0;
}