#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct player
{
    char name[50];
    int age;
    char country[64];
    int rank;
};

int main() {
    int n, i;
    scanf("%d", &n);
    
    struct player p[n];
    
    for(i=0; i<n; i++)
    {
       scanf("\n");
       scanf("%[^\n]", p[i].name); 
       scanf("%d", &p[i].age);
       scanf("\n");
       scanf("%[^\n]", p[i].country);
       scanf("%d", &p[i].rank);
       
    }
    
    char k[64];
    int count =0;
    scanf("\n");
    scanf("%[^\n]", k);
    
    for(i=0; i<n; i++)
    {
        if(strcmp(p[i].name, k)==0)
        {
            count++;
            break;
        }
    }
    if(count>0)
    {
        printf("Name:\t%s\nAge:\t%d\nCountry:\t%s\nRanking:\t%d\n", p[i].name, p[i].age, p[i].country, p[i].rank);
    }
    else
    {
        printf("Player Not Found");
    }
     
    return 0;
}