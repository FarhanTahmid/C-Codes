#include<stdio.h>
struct student
{
    char name[50];
    long int studentID;
    long int password;
    char major[50];

};
struct student s[3];

int main()
{
    int i;
    struct student s[3]={{.name="Farhan Ishrak Tahmid",.studentID=2031458642,.password=123456,.major="Computer Science and Engineering"},
    {.name="Nandini Das",.studentID=2031326642,.password=123456,.major="Computer Science and Engineering"},
    {.name="Humayra Jahan Shemushee",.studentID=2031454642,.password=123456,.major="Computer Science and Engineering"}};

    /*printf("Enter data for 3 students:\n");

    for(i=0; i<3;i++)
    {
       scanf("\n");
       scanf("%[^\n]",&s[i].name);
       scanf("%li",&s[i].studentID);
       scanf("%li",&s[i].password);

    }
    */
    /*
    printf("Entered data:\n");
    printf("Name:\tStudent ID:\tPassword:\n");
    for(i=0; i<3;i++)
    {
       printf("%s\t", s[i].name);
       printf("%li\t", s[i].studentID);
       printf("%li\t", s[i].password);
       printf("%s\t", s[i].major);
       printf("\n");
    }
    */

    //long int defaultUSername=2031458642;
    //long int defaultpass= 123456;

    long int enteredusername;
    long int enteredpass;
    printf("Enter the user name:\n");
    scanf("%li", &enteredusername);
    printf("Enter the pass:\n");
    scanf("%li", &enteredpass);
    //int flag;
    for(i=0;i<3;i++)
    {
        if((enteredusername==s[i].studentID) && (enteredpass==s[i].password))
        {

            printf("\nLogin successful.");
            //flag=1;
            break;
        }
        else
        {
            printf("\nLogin unsuccessful.");
//            flag=0;
            break;
        }
    }

    return 0;
}
