#include<stdio.h>
int main()
{
    int amount;
    int note1000=0, note500=0, note100=0, note50=0, note20=0, note10=0, note5=0, note2=0;
    printf("Enter an amount: \n");
    scanf("%d", &amount);

    if(amount>=1000)
    {
        note1000 = amount/1000;
        amount = amount - (note1000*1000);
    }
    if(amount>=500)
    {
        note500 = amount/500;
        amount = amount - (note500*500);
    }
    if(amount>=100)
    {
        note100 = amount/100;
        amount = amount - (note100*100);
    }
    if(amount>=50)
    {
        note50 = amount/50;
        amount = amount - (note50*50);
    }
    if(amount>=20)
    {
        note20 = amount/20;
        amount = amount - (note20*20);
    }
    if(amount>=10)
    {
        note10 = amount/10;
        amount = amount - (note10*10);
    }
    if(amount>=5)
    {
        note5 = amount/5;
        amount = amount - (note5*5);
    }
    if(amount>=2)
    {
        note2 = amount/2;
        amount = amount - (note2*2);
    }

    printf("1000 taka notes in the amount of %d are: %d\n", amount, note1000);
    printf("500 taka notes in the amount of %d are: %d\n", amount, note500);
    printf("100 taka notes in the amount of %d are: %d\n", amount, note100);
    printf("50 taka notes in the amount of %d are: %d\n", amount, note50);
    printf("20 taka notes in the amount of %d are: %d\n", amount, note20);
    printf("10 taka notes in the amount of %d are: %d\n", amount, note10);
    printf("5 taka notes in the amount of %d are: %d\n", amount, note5);
    printf("2 taka notes in the amount of %d are: %d\n", amount, note2);

    return 0;
}

