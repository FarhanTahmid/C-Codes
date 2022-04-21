void factorial(int start, int end)
{

    if (start < 0 || end < 0 || start > end)
        return;
 
    for (int i = start; i <= end; i++)
    {
        int fact = 1;
 
        for (int j = 1; j < i; j++)
            fact = fact * j;
 
        printf("The Factorial of %d is %d\n", i, fact);
    }
}
 
int main()
{
    int start = 5;
    int end = 10;
 
    factorial(start, end);
 
    return 0;
}