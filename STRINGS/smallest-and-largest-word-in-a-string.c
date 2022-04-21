
#include<stdio.h>
#include<string.h>
int main()
{

    char string[100];
    char word[50][100], smallWord[100],largeWord[100];
    int i,j;
    int k;
    int length;
    j=0;
    k=0;
    printf("Enter the string:\n");
    fgets(string,100,stdin);
    fflush(stdin);
    
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]!=' ' && string[i]!='\0')
        {
            word[k][j++]=string[i];
        }
        else
        {
            word[k][j]='\0';
            k++;
            j=0;
        }
    }
    length=k+1;
    strcpy(smallWord,word[0]);
    strcpy(largeWord,word[0]);
    for(i=0;i<length;i++)
    {
        if(strlen(smallWord)>strlen(word[i]))
        {
            strcpy(smallWord,word[i]);
        }
        else if(strlen(largeWord)<strlen(word[i]))
        {
            strcpy(largeWord,word[i]);
        }
    }
    printf("\nSmallest word: %s\n",smallWord);
    printf("\nLargest word: %s\n",largeWord);

    return 0;
}
