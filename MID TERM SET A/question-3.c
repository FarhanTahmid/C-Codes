
#include<stdio.h>
int main()
{
    int x=1,y=2;
    char dir;
    printf("Position of the person in co-ordinates= (%d,%d)", x,y);
    printf("Enter the direction of movement: \nUse uppercase letters N for North S for south\E for east and W for west. ");
    scanf("%c", &dir);
    switch(dir)
    {
    case 'N':
        printf("Current position: (%d,%d)", x+1,y+1);
        break;
    case 'S':
        printf("Current position: (%d,%d)", x,y-1);
        break;
    case 'E':
        printf("Current position: (%d,%d)", x+1,y);
        break;
    case 'W':
        printf("Current position: (%d,%d)" ,x-1,y);
        break;
    }

    return 0;
}
