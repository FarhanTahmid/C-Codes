#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);
    if((ch>='a') && (ch<='z')||(ch>='A') && (ch<='Z'))
        printf("Alphabet");
    else if(ch>=0 && ch<=255)
        printf("Digit.");
    else
        printf("Special character.");

    return 0;
}
