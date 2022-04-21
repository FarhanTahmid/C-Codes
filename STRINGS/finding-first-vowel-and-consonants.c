#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char temp[100];
    printf("Enter the string: \n");
    fgets(str,100,stdin);
    fflush(stdin);
    int length=strlen(str);
    int i=0;
    int j=0;
    for(i=0; i<length; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            printf("First vowel is %c\n",str[i]);
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            for(j=0;j<100;j++)
            {
                str[i]=temp[j];
            }
        }
        
    }
    for(j=0; j<100;j++)
    {
        printf("Consonants: %c\n",temp[j]);
    }
    
    return 0;
}