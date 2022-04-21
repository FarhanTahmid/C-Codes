#include<stdio.h>
void getTime(int);

int main()
{
    int a;
    getTime(a);
    return 0;
}

void getTime(int a)
{
    int min,sec;
    printf("Enter the time in seconds: ");
    scanf("%d", &a);
    min= a/60;
    sec= (a - (min*60));

    printf("Minute: %d\nSeconds: %d", min, sec);
    return 0;

}
