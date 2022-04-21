#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
            continue;
        else if(i%7==0)
            break;
        printf("%d.CSE 115\n", i);
    }

    return 0;
}
