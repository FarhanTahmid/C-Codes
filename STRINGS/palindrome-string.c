#include <stdio.h>
#include <string.h>

int main()
{
char a[100], b[100];
printf("Enter the string to check: ");
gets(a);

strcpy(b, a);
strrev(b);

if (strcmp(a, b) == 0)
    printf("\nThe string is a palindrome");
else
    printf("\nThe string is not t a palindrome");

return 0;
}