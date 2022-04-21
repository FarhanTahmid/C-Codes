#include<stdio.h>
int isDigit(int);

int main()
{
    int i,n;
    char ch;
    char x;

    printf("Enter how many characters you want to test: ");
    scanf("%d", &n);


    for(i=1;i<=n;i++)
    {
        printf("\nEnter  character you want to test: ");
        scanf("%c",&ch);

        switch (x=isDigit(ch))
        {
        case 1:
            printf("%c is a digit.",ch);
            break;
        case 0:
            printf("%c is not a digit.",ch);
            break;
        default:
            printf("Enter a character.");
            break;
        }

    }
    return 0;

}

int isDigit(int a)
{
    if(a >= '0' && a <= '9')
        return 1;
    else
    {
        return 0;
    }

}
