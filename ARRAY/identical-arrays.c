#include <stdio.h>

int main (void)
{
	int A[5];
	int B[5];
	int i;
	int j;

	for (int i = 0; i < 5; i++)
		scanf("%d", &A[i]);
	
	for (int j = 0; j < 5; j++)
		scanf("%d", &B[j]);

		if (A[0] == B[0] && A[1] == B[1] && A[2] == B[2] && 
			A[3] == B[3] && A[4] == B[4] && A[5] == B[5] && 
			A[6] == B[6] && A[7] == B[7] && A[8] == B[8] && 
			A[9] == B[9])

            printf("Strictly identical");
        else
        {
            printf("Not identical");
        }
        
	return 0;
}