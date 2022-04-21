#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<= 'z'))
        printf("Alplhabet");
    else
        printf("Not alphabet");


    return 0;
}
