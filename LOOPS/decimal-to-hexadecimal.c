#include<stdio.h>
int main()
{
    int dec,rem,dn=0,q,m,l,i,j,temp;
    char a;
    printf("Enter the decimal number you want to convert in hexa decimal: ");
    scanf("%d", &dec);

    q=dec;
    for(l=q;l>0;l=l/16)
    {
        temp=l%16;
        if(temp<10)
        {
            temp=temp+48;
        }
        else
        {
            temp=temp+55;
        }
        dn=dn*100+temp;
    }
    printf("Hexa decimal number: %d");
    for (m=dn;m>0;m=m/100)
    {
        a=m%100;
        printf("%c", a);
    }
    
    return 0;
}