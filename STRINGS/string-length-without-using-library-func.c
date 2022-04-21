#include <stdio.h>
int main()
{
    char str1[100],str2[100], i,j;
    printf("Enter string 1: \n");
    scanf("%s",str1);
    printf("Enter string 2: \n");
    scanf("%s",str2);

    for(i=0; str1[i]!='\0'; i++);
       printf("\nLength of input string 1: %d",i);
    for(j=0; str2[j]!='\0'; j++);
       printf("\nLength of input string 2: %d",j);
    if(i>j)
    {
        printf("%s is smaller",str2);
    }
    else if(i<j)
    {
        printf("%s is smaller",str1);
    }
    else
    {
        printf("Length are same");
    }
    
    return 0;
}