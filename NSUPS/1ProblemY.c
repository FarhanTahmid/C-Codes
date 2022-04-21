#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    int numberOfInputs;
    scanf("%d",&numberOfInputs);
    
    char shipType[numberOfInputs][1];
    char comparing;
    for(int i=0;i<numberOfInputs;i++){
        for(int j=0;j<1;j++){    
            scanf(" %c",&shipType[i][j]);
        }
    }
    
    for(int i=0;i<numberOfInputs;i++){
        for(int j=0;j<1;j++){
            //printf("%c",shipType[i][j]);
            comparing='0';
            if(comparing=tolower(shipType[i][j])=='b'){
                printf("BattleShip\n");
            }
            else if(comparing=tolower(shipType[i][j]=='c')){
                printf("Cruiser\n");
            }
            else if(comparing=tolower(shipType[i][j])=='d'){
                printf("Destroyer\n");
            }
            else if(comparing=tolower(shipType[i][j])=='f'){
                printf("Frigate\n");
            }
            
                
        }
    }
    
}