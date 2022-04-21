#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
       printf("Lowercase Alphabet");
    else if(ch>='A' && ch<= 'Z')
        printf("Uppercase Alphabet");
    else
        printf("%c is not an alphabet", ch);


    return 0;
}
