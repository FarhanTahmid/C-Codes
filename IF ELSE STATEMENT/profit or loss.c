#include<stdio.h>
int main()
{
    int price, sellingPrice, amount;
    printf("Please enter price of the product: \n");
    scanf("%d", &price);
    printf("Please enter the selling price of the product: \n");
    scanf("%d", &sellingPrice);

    if(sellingPrice>price)
    {
        amount=sellingPrice-price;
        printf("Profit: %d", amount);
    }
    else if(price>sellingPrice)
    {
        amount=price-sellingPrice;
        printf("Loss: %d", amount);
    }
    else
        {
            printf("No profit, No loss");
        }

    return 0;
}
