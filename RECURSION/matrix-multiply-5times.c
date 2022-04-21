#include<stdio.h>
int main()
{
    int m[4][4]={{1,1,1,0},{1,1,1,1},{1,0,0,0},{0,1,1,1}};//declaring the given matrix
    int i, j, k, l, total;
    int temp[4][4],result[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            temp[i][j]=m[i][j];
        }
    }
    for(l=1; l<5; l++)// for getting the multiply result
    {
         for(i=0; i<4; i++)
    {
          for(j=0; j<4; j++)
    {
          total=0;
          for(k=0; k<4; k++)
    {
          total += (temp[i][k] * m[k][j]);
       if(total>0){
         total=1;
       }
       else{
        total=0;
       }
    }
          result[i][j]= total;
    }
    }

        for(i=0;i<4;i++)//for the final matrix elements
        {
        for(j=0;j<4;j++)
            {
            temp[i][j] = result[i][j];

        }
        }
    }
    printf("RESULT MATRIX R5 FROM THE GIVEN MATRIX\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++){
            printf(" %d ",result[i][j]);//printing result of the given matrics
            //printf("\n");
        }
        printf("\n");
    }




    return 0;
}