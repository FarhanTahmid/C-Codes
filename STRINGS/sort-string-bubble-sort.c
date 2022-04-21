#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter how many strings you want to input: ");
    scanf("%d", &n);
    char strings[n][50];
    char tempS[50];
    int i,count;
    int j;
    printf("\nEnter the strings:\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]: ",i);
        fflush(stdin);
        fgets(strings[i],50,stdin);
        fflush(stdin);
    }
    for(count=0;count<n-1;count++)
    {
        for(i=0;i<(n-1)-count;i++)
        {
            j=strcmp(strings[i],strings[i+1]);
            if(j>0)
            {
                strcpy(tempS,strings[i]);
                strcpy(strings[i],strings[i+1]);
                strcpy(strings[i+1],tempS);
            }
        }
    }
    printf("\nStrings after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%s",strings[i]);
    }
    return 0;
}
