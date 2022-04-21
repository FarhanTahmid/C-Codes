#include <stdio.h>
int main()
{
    char A[150],B[50],C[50];

    fflush(stdin);
    printf("Enter first string: ");
    gets(A);
    fflush(stdin);
    printf("Enter second string: ");
    gets(B);
    fflush(stdin);
    printf("Enter third string: ");
    gets(C);
    fflush(stdin);

    int length=strlen(A);
    int i=0;
    while(B[i]!=NULL){
        A[length]=B[i];
        length++;
        i++;
    }
    A[length]=NULL;
    length = strlen(A);
    i = 0;
    while(C[i] != NULL){
        A[length] = C[i];
        length++;
        i++;
    }
    A[length] = NULL;
    printf("Final string: ");
    puts(A);

    return 0;
}

