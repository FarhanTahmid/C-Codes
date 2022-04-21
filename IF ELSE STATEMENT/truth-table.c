#include<stdio.h>
#include<math.h>
void conjuctionDisjunctionResult()
{
    int p1=1,p2=1,p3=0,p4=0;
    int q1=1,q2=0,q3=1,q4=0;
    int r1=0,r2=0,r3=1,r4=1;
    int conj1,conj2,conj3,conj4;
    int disj1,disj2,disj3,disj4;

    if(p1==1 && q1==1)
    {
        conj1=1;
    }
    else if(p2==1 && q2==0)
    {
        conj2=0;
    }
    else if(p3==0 && q3==1)
    {
        conj3=0;
    }
    else if(p4==0 && q4==0)
    {
        conj4=0;
    }

    if(r1==0 && conj1==1)
    {
        disj1=1;
    }
    else if(r2==0 && conj2==0)
    {
        disj2=0;
    }
    else if(r3==1 && conj3==0)
    {
        disj3=1;
    }
    else if(r4==1 && conj4==0)
    {
        disj4=1;
    }
    printf("TRUTH TABLE FOR (P^Q)vR IS:\n");
    printf("P | Q | R | (P^Q) | (P^q)vR\n");
    printf("---------------------------\n");
    printf("%d | %d | %d |   %d   |     %d\n",p1,q1,r1,conj1,disj1);
    printf("---------------------------\n");
    printf("%d | %d | %d |   %d   |     %d\n",p2,q2,r2,conj2,disj2);
    printf("---------------------------\n");
    printf("%d | %d | %d |   %d   |     %d\n",p3,q3,r3,conj3,disj3);
    printf("---------------------------\n");
    printf("%d | %d | %d |   %d   |     %d\n",p4,q4,r4,conj4,disj4);


}
int main()
{
    conjuctionDisjunctionResult();
    return 0;
}