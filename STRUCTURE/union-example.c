#include<stdio.h>
#include<string.h>

union IdentityNo
{
    char name[30];
    char NID[20];
    char bday[20];
    char passportNum[30];
    char address[100];

};
struct identity
{
    char type;
    union IdentityNo person;
};
int main()
{
    struct identity p;
    char s;

    printf("\nEnter n to see the name\nEnter p to see passport number of the person.\nEnter f to see the nid no.");
    strcpy(p.person.NID,"2031458642");
    strcpy(p.person.name,"Farhan Tahmid");
    strcpy(p.person.passportNum,"BG 203134567");
    printf("\nPlease enter your option: ");
    scanf(" %c", &s);
    p.type=s;

    if(p.type== 'n')
    {
        printf("\nName of the person is %s",p.person.name);
    }
    else if(p.type== 'p')
    {
        printf("\nPassport number: %s",p.person.passportNum);
    }
    else if(p.type== 'f')
    {
        printf("\nNID no. %s",p.person.NID);
    }
    else
    {
        printf("Wrong input!");
    }
    return 0;

}
