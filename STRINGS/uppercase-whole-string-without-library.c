#include <stdio.h>

int main()
{
    char str[200];
    int i;
    printf("Enter the string : ");
    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("After uppercasing the string: %s",str);
    return 0;
}
