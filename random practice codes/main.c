/*#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition
{
    int result;
    result = a+b;
    return result;                  // return statement
}
*/

/*
//sum of natural number using RECURSION
#include <stdio.h>
int sum(int n);
int main()
{
    int number, result;
    printf("Enter a positive integer : ");
    scanf("%d", &number);
    result = sum(number);
     `
    char name [40];

    printf("Enter a number:");
    scanf("%d", &number);
    printf("Your number is %d\n", number);

    printf("Enter a decimal number:");
    scanf("%f", &decimal);
    printf("Your decimal number is %f\n", decimal);

    printf("Enter your name:");
    gets(name);
    printf("Your name is %c", name);

    return 0;
}
*/
#include <stdio.h>
/*
int main()
{
    int n;
    int number;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=0;i<number;i++){
        scanf("%d",&number);
        sum+=number;
    }
    printf("%d",sum);
}
*/

void count(int n){
    static int d=1;
    printf("%d",n);
    printf("%d",d);
    d++;
    if(n>1) count(n-1);
    printf("%d ",d);
    
}

int main(){
    count(3);

    return 0;
}