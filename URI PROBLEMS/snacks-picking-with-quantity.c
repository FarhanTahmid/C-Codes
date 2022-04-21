#include<stdio.h>
int main()
{
    int x,y;
    printf("Choose your snacks and enter the number of the snacks here:\n1.Burger\n2.Pizza\n3.Pasta\n4.Kebab \n");
    scanf("%d",&x);
    printf("Enter the quantity of the time you want: \n");
    scanf("%d", &y);

    switch (x)
    {
    case 1:
        printf("Total amount you have to pay is %d taka.", 250*y);
        break;
    case 2:
        printf("Total amount you have to pay is %d taka.", 400*y);
        break;
    case 3:
        printf("Total amount you have to pay is %d taka.", 350*y);
        break;
    case 4:
        printf("Total amount you have to pay is %d taka.", 150*y);
        break;
    
    default:
        printf("Enter the correct number and amount.");
        break;
    }
    return 0;
}