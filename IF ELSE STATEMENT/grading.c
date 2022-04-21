#include<stdio.h>
int main()
{
    double grades;
    printf("Enter the grades:");
    scanf("%lf", &grades);

    if(grades>=3.50)
        printf("Status : Very Good");
    else if(grades>=3.00 && grades<3.49)
        printf("Status : Good");
    else if(grades>=2.50 && grades<2.99)
        printf("Status : Fair");
    else if(grades>=2.00 && grades<2.49)
        printf("Status : Poor");

    return 0;
}
