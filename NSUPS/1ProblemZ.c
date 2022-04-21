#include<stdio.h>
int main(){
    int numberofStrings;
    int sum;
    scanf("%d",&numberofStrings);
    int angles[numberofStrings][3];
    for(int i=0;i<numberofStrings;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&angles[i][j]);
        }
    }
    for(int i=0;i<numberofStrings;i++) {
			sum=0;
			for(int j=0;j<3;j++) {
				sum+=angles[i][j];
			}
			if(sum==180) {
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}


}