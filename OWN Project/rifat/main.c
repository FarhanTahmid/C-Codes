#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int apple;
    printf("Enter the amount of apple: ");
    scanf("%d",&apple);
    if(apple==10){
        printf("Thanks");
    }
    else if(apple>10){
        printf("take 10 taka extra");
    }
    else{
        printf("gali");
    }
    return 0;
}
*/
/*
int main()
{
    int number;
    printf("Enter the number you want to check: ");
    scanf("%d",&number);
    if(number%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
*/
/*
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("%d is the biggest number",a);
    }
    else if(b>a && b>c){
        printf("%d is the biggest number",b);
    }
    else if(c>a && c>b){
        printf("%d is the biggest number",c);
    }

    return 0;

}
*/
/*
int main()
{
    char alphabet;
    printf("Enter the number of month: ");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case 'a':
        {
            printf("vowel");
            break;
        }
        case 3:
            {
                printf("February");
                break;
            }
        case 4:
            {
                printf("March");
                break;
            }
        default:
            {
                printf("consonant");
            }
    }

    return 0;
}
*/

int main()
{
    int n;
    int sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    int i=0;
    int number;
    for(i=0;i<n;i++){
        scanf("%d",&number);
        sum=sum+number;
    }
    printf("%d",sum);
}

