#include<stdio.h>
int isDigit(int);

int main()
{
    int i,n;
    char ch;

    printf("Enter how many characters you want to test: ");
    scanf("%d", &n);
    char s=getchar();
    

    for(i=1;i<=n;i++)
    {
        printf("Enter the character you want to test:");
        scanf("%c",&ch);
        getchar();
        ch=isDigit(ch);
        switch (ch)
        {
        case 1:
            printf("Is a digit.\n");
            break;
        case 0:
            printf("Not a digit.\n");
            break;
        default:
            printf("Enter a character.\n");
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
        return 0;
    
}