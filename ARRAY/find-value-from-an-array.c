#include <stdio.h>

void search(int b[], int size, int value){
    int i;
    for(i=0; i<size; i++){
        if(b[i] == value){
            printf("Value found at index %d.", i);
        }
    }
    return 0;
}


int main(){
    int i, d, size;
    scanf("%d", &size);
    int arr1[size];

    for(i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &d);
    search(arr1, size, d);
    
    return 0;
}