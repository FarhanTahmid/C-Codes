#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the grades : \n");

    int i;
    for(i = 0; i < count; ++i)
    {
        printf("%2u>", i+1);   /*/this line prints unsigned integers to enter number like
                                    1
                                    2
                                    3
                                    4 and so on */
        scanf("%d",&grades);
        sum += grades[i];
    }

    average = (float)sum / count;
    printf("\nThe average value of the numbers is : %.2f\n",average);

    return 0;
}
