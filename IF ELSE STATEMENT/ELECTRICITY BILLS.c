#include <stdio.h>

int main()
{
    int unit;
    float amount, total_amount, sur_charge;
    printf("Enter units of consumption: ");
    scanf("%d", &unit);



    if(unit <= 200)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 400)
    {
        amount = 100 + ((unit-200) * 0.65);
    }
    else if(unit <= 600)
    {
        amount = 200 + ((unit-400) * 0.80);
    }
    else
    {
        amount = 300 + ((unit-400) * 1.00);
    }

    printf("Your Bill is= %.2f", amount);

    return 0;
}
