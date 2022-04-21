#include<stdio.h>

void showbalance(float *balance)
{
    printf("Your current balance is %.2f Taka",balance);
    return;
}
float withdrawal(float *balance)
{
    float withdrawamount;
    printf("\nEnter the amount you want to withdraw:\n");
    scanf("%f",&withdrawamount);
    if(*balance>withdrawamount)
    {
        *balance-=withdrawamount;
        printf("Your withdrawal amount is %.2f\n",withdrawamount);
        printf("\nYour new balance is %.2f", balance);
    }
    else
    {
        printf("\nYou don't have enough money to withdraw!");
        printf("\nYour current account balance is %.2f",balance);
    }
    return *balance;
}
float deposit(float *balance)
{
    float depositamount;
    printf("\nEnter the amount you want to deposit: ");
    scanf("%f",&depositamount);

    *balance+=depositamount;
    printf("\nYour new balance is %.2f", balance);
    return *balance;
}
int main()
{
    float balance = 200000.00;
    int option;
    while (1)
    {
        printf("\nEnter your selection:\n");
        scanf("%d", option);
        switch (option)
        {
            case 1:
            {
                showbalance(&balance);
                printf("%.2f",*balance);
                break;
            }
            case 2:
            {
                balance=withdrawal(&balance);
                break;
            }
            case 3:
            {
                balance=deposit(&balance);
                break;
            }
        }

    }


    return 0;
}
