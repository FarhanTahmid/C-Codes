#include <stdio.h>
#include <string.h> 
int main()
{
    char str[100];
    char splitStrings[10][50];
    int i,j,count;
 
    printf("Enter a string: ");
    fgets(str,100,stdin);
    fflush(stdin);
 
    j=0; count=0;
    for(i=0;i<=(strlen(str));i++)
    {
        
        if(str[i]==' '||str[i]=='\0')
        {
            splitStrings[count][j]='\0';
            count++; 
            j=0;   
        }
        else
        {
            splitStrings[count][j]=str[i];
            j++;
        }
    }
    printf("\nOriginal String is: %s",str);
    printf("\nStrings (words) after split by space:\n");
    for(i=0;i < count;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}
