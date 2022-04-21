#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int t;
    int firstLargest=0;
    int secondLargest=0;
    scanf("%d", &t);
    while (t>0)
    {
        for(int i=1;i<=3;i++){
            scanf("%d",&n);
            if(n>firstLargest){
                secondLargest=firstLargest;
                firstLargest=n;
            }
            if(n>secondLargest && n<firstLargest){
                secondLargest=n;    
            }
        }
        printf("%d\n",secondLargest);
        firstLargest=0;
        secondLargest=0;
        t--;
    }
    
}