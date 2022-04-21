#include<stdio.h>
int countFreq(int list[], int z, int k)
{
    int i,count=0;

    for(i=0; i<z; i++)
    {
        if(list[i]==k)
        count++;
    }
    return count;
}
int main()
{
    int i,size,number;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int list[size];

    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &list[i]);
    }
    printf("Enter the element which you want to check: ");
    scanf("%d", &number);
    int freq = countFreq(list,size,number);
    printf("Frequency of %d is %d.", number, freq);

    return 0;
}