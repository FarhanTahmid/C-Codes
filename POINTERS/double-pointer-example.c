#include <stdio.h> 
  
// C program to demonstrate pointer to pointer 
int main() 
{ 
    int var = 789; 
  
    // pointer for var 
    int *ptr2; 
  
    // double pointer for ptr2 
    int **ptr1; 
  
    // storing address of var in ptr2 
    ptr2 = &var; 
      
    // Storing address of ptr2 in ptr1 
    ptr1 = &ptr2; 
      
    // Displaying value of var using 
    // both single and double pointers 
    printf("\nValue of var = %d\n", var );
    printf("Address of the var is: %p",&var); 
    printf("\n\nValue of var using single pointer = %d\n", *ptr2 );
    printf("Address of the pointer 2 is: %p",&ptr2); 
    printf("\n\nValue of var using double pointer = %d\n", **ptr1);
    printf("Address of the pointer 1 is: %p",&ptr1); 
    
  return 0; 
}  