#include <stdio.h>

int main() {
    int side1, side2, side3;
    int angle1, angle2, angle3,angleCheck;

    printf("Enter Length of Three Sides of a Triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);
    printf("Enter Degree of Three angles of a Triangle\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    angleCheck=angle1+angle2+angle3;

    if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2)&&(angleCheck==180)) {
        printf("It is a Valid Triangle\n");
    } else {
        printf("It is an invalid Triangle");
    }

    return 0;
}
