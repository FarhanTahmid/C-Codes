//C program to check whether an int is armstrong number

#include<stdio.h>
#include<math.h>

int main()
{
    int n, t, r, sumIncludingPower=0, d=0;
    printf("Enter a number to check : ");
    scanf("%d", &n);
    //counting the digits
    t=n;     //preserving the value of n and t is going to be used counting digits

    while(t!=0)
    {
        d++;
        t = t/10;
    }
    printf("\nDigits : %d", d);

    t = n; //again assigning t because we need to calculate the sum now

    //calculating sum

    while(t!=0)
    {
        r = t%10;
        sumIncludingPower += pow(r,d);
        t = t/10;
    }
    printf("\nSum including power : %d", sumIncludingPower);

    if(n==sumIncludingPower)
        printf("\n%d is an armstrong number", n);
    else
        printf("\n%d is not an armstrong number", n);
    return 0;
}
