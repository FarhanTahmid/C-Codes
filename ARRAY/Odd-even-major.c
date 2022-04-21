#include<stdio.h>
int main(){
    int array[9];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<9;i++){
        printf("[%d]: ",i);
        scanf("%d",&array[i]);
    }
    int oddcount=0;
    int evencount=0;
    for(int i=0;i<9;i++){
        if(array[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    if(evencount>oddcount){
        printf("Even Major");
    }
    else if(oddcount>evencount)
    {
        printf("Odd major");
    }
    
}