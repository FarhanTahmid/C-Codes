#include<stdio.h>

void showbalance(float balance)
{
    printf("Your current balance is %.2f Taka",balance);
    return;
}
float withdrawal(float *balance,float withdrawamount)
{
    if(*balance>withdrawamount)
    {
        *balance-=withdrawamount;
        printf("Your withdrawal amount is %.2f\n",withdrawamount);
    }
    else
    {
        printf("\nYou don't have enough money to withdraw!");
        printf("\nYour current account balance is %.2f",balance);
    }
    return *balance;
}
float deposit(float *balance,float depositamount)
{
    printf("Your deposit balance is %.2f",depositamount);
    *balance+=depositamount;
    return *balance;
}

int main()
{

    float balance = 200000.00;
    showbalance(balance);
    
    float withdrawamount;
    float depositamount;
    printf("\nEnter the amount you want to withdraw:\n");
    scanf("%f",&withdrawamount);
    float withdrawresult=withdrawal(&balance,withdrawamount);
    printf("\nYour new balance is %.2f", balance);

    printf("\nEnter the amount you want to deposit: ");
    scanf("%f",&depositamount);
    float depositresult=deposit(&balance,depositamount);
    printf("\nYour new balance is %.2f", balance);

    
    return 0;
}
