#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    long long int studentID;
    long int password;
    char major[50];
    double balance;
    int completedcredit;
    char semesterName[45];
    double cgpa;

}student;
int main()
{
     struct student s[3]={[0].name="Farhan Ishrak Tahmid",[0].studentID=2031458642,[0].password=123456,
                        [0].major="Computer Science and Engineering",[0].balance=200000,
                        [0].completedcredit=10,[0].semesterName="Fall 2020",[0].cgpa=3.35,
                        [1].name="Nandini Das",[1].studentID=2031326642,[1].password=123456,
                        [1].major="Computer Science and Engineering",[1].balance=250000,
                        [1].completedcredit=12,[1].semesterName="Fall 2020",[1].cgpa=3.65,
                        [2].name="Humayra Jahan Shemushee",[2].studentID=2031454642,[2].password=123456,
                        [2].major="Computer Science and Engineering",[2].balance=300000,
                        [2].completedcredit=15,[2].semesterName="Fall 2020",[2].cgpa=3.85};



    int i;
    long long int statusID;
    printf("\nEnter your NSU ID to view your Course status\n");
    scanf("%lld", &statusID);
    for(i=0; i<3; i++)
    {

        if(statusID != s[i].studentID && i==2)
        {
            printf("You entered your id no. wrong!");
            return 0;
        }

        else if(statusID == s[i].studentID)
        {
            printf("\nYour course Status:\n");
            printf("Student name: %s",s[i].name);
            printf("\nCompleted Credit numbers: %d\n",s[i].completedcredit);
            printf("Semester name: %s\n", s[i].semesterName);
            printf("Current CGPA: %lf",s[i].cgpa);
            break;
        }
    }



    return 0;
}
