#include<stdio.h>
#include<string.h>

int main()
{
    char temp;
    char str[100];
    char str2[100];
    printf("Enter the string: \n");
    fgets(str,100,stdin);
    fflush(stdin);
    strcpy(str2,str);
    int length=strlen(str);
    int i;
    int j;
    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }

    }
    
    if(strcmp(str,str2)==0){
        printf("ORDERED");
    }
    else
    {
        printf("NOT ORDERED");
    }
    return 0;
}