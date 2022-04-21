#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void mainMenu();
void clubmenu();
void checkBalance(double *balance);
double deposit(double *balance);
double withdraw(double *balance);
double tutionFee(double *balance,double credit);
double clubFee(double *balance, double fee);
void canteenFee(double);
void parkingFee(double);


struct sclubfee
{
    double fee;
    int clubID;
};
struct sclubfee sclub[3];

struct student
{
    char name[50];
    long int studentID;
    long int password;
    char major[50];
    double balance;
    int completedcredit;
    char semesterName[45];
    double cgpa;

};
struct student s[3];

int main()
{
    printf("\n");
    printf("\t\t\tWelcome to NSU booth\n");

    int i;
    struct student s[3]={[0].name="Farhan Ishrak Tahmid",[0].studentID=2031458642,[0].password=123456,
                        [0].major="Computer Science and Engineering",[0].balance=200000,
                        [0].completedcredit=10,[0].semesterName="Fall 2020",[0].cgpa=3.35,
                        [1].name="Nandini Das",[1].studentID=2031326642,[1].password=123456,
                        [1].major="Computer Science and Engineering",[1].balance=250000,
                        [1].completedcredit=12,[1].semesterName="Fall 2020",[1].cgpa=3.65,
                        [2].name="Humayra Jahan Shemushee",[2].studentID=2031454642,[2].password=123456,
                        [2].major="Computer Science and Engineering",[2].balance=300000,
                        [2].completedcredit=15,[2].semesterName="Fall 2020",[2].cgpa=3.85};

    struct sclubfee sclub[3]={[0].fee=2500,[0].clubID=203145,[1].fee=2500,[1].clubID=202345,[2].fee=2500,[2].clubID=234566};

    printf("\nPlease Login to access your account\n");
    long int enteredusername;
    long int enteredpass;
    printf("Enter the user name:\n");
    scanf("%li", &enteredusername);
    printf("Enter the pass:\n");
    scanf("%li", &enteredpass);
    int flag;
    for(i=0;i<3;i++)
    {
        if((enteredusername!=s[i].studentID) && (enteredpass!=s[i].password))
        {

            printf("\nLogin unsuccessful.");
            return 0;
        }
        else if((enteredusername==s[i].studentID) && (enteredpass==s[i].password))
        {
            printf("Login successful!");
            flag =1;
            break;
        }

    }
    if(flag==1)
    {
        for(i=0; i<3; i++)
        {
            if(enteredusername==s[i].studentID)
            {
                printf("\nStudent name: %s\nStudent ID: %li\nCurrent major: %s", s[i].name,s[i].studentID,s[i].major);
            }
        }
        double studbalance;
        for(i=0; i<3; i++)
        {
            if(enteredusername==s[i].studentID)
            {
                studbalance=s[i].balance;
            }
        }
        printf("\nMain menu:\n");
        //again design
        int anotherTransaction=1;
        mainMenu();
        while(anotherTransaction==1)
        {

            int option;
            printf("\nEnter the option you want to select: ");
            scanf("%d", &option);
            switch(option)
            {
                case 1:
                    {
                        checkBalance(&studbalance);
                        break;
                    }
                case 2:
                    {
                        double depositresult=deposit(&studbalance);
                        printf("\nYour new balance is %.2lf\n",depositresult);
                        break;
                    }
                case 3:
                    {
                        double withdrawresult=withdraw(&studbalance);
                        printf("\nYour current balance is %.2lf\n",withdrawresult);
                        break;
                    }
                case 4:
                    {

                        printf("Enter the theory course names you want to take in the next semester:\nYou can take 12 credits at most(4 courses).\nInput example (cse115 cse173 cse225)\n");
                        printf("\nCourse names:\n");
                        double count=0;
                        int i=1;
                        char string[250];
                        scanf(" ");
                        gets(string);
                        char* token=strtok(string," ");
                        while(token)
                        {
                            printf("%d.%s\n",i++,token);
                            token=strtok(NULL," ");
                            count++;
                        }
                        printf("Your total theory courses are: %.2lf",count);
                        printf("\nYou can only do one lab course for this semester\nEnter your lab course name:\n");
                        char labcourse[10];
                        scanf(" ");
                        gets(labcourse);
                        printf("Your entered lab course for this semester: %s",labcourse);
                        double totalCredits= (count*3)+1;
                        printf("\nYou have taken total of %.1lf credits in this semester.\n",totalCredits);
                        double tutionFeeresult=tutionFee(&studbalance,totalCredits);
                        printf("\nYour current balance is %.2lf\n",tutionFeeresult);

                        break;
                    }
                case 5:
                    {
                        int i;
                        long int statusID;
                        printf("\nEnter your NSU ID to view your Course status\n");
                        scanf("%li", &statusID);
                        if(statusID==2031458642)
                        {
                            printf("\nYour course Status:\n");
                            printf("Student name: %s",s[0].name);
                            printf("\nCompleted Credit numbers: %d\n",s[0].completedcredit);
                            printf("Semester name: %s\n", s[0].semesterName);
                            printf("Current CGPA: %lf",s[0].cgpa);
                        }
                        else if(statusID==2031326642)
                        {
                            printf("\nYour course Status:\n");
                            printf("Student name: %s",s[1].name);
                            printf("\nCompleted Credit numbers: %d\n",s[1].completedcredit);
                            printf("Semester name: %s\n", s[1].semesterName);
                            printf("Current CGPA: %lf",s[1].cgpa);
                        }
                        else if(statusID==2031454642)
                        {
                            printf("\nYour course Status:\n");
                            printf("Student name: %s",s[2].name);
                            printf("\nCompleted Credit numbers: %d\n",s[2].completedcredit);
                            printf("Semester name: %s\n", s[2].semesterName);
                            printf("Current CGPA: %lf",s[2].cgpa);
                        }
                        break;
                    }
                case 6:
                    {
                        clubmenu();
                        int clubOption;
                        printf("\nEnter the option you want to select: ");
                        scanf("%d", &clubOption);
                        switch(clubOption)
                        {
                            case 1:
                                {
                                    int enteredID;
                                    printf("\nEnter your IEEE ID: ");
                                    scanf("%d",&enteredID);
                                    for(i=0;i<3;i++)
                                    {
                                        if(enteredID!=sclub[i].clubID)
                                        {
                                            printf("\nWrong ID!\n");
                                            return 0;
                                        }
                                        else if(enteredID==sclub[i].clubID)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else
                                            {
                                                return 0;
                                            }
                                            break;
                                        }
                                    }
                                    break;

                                }
                            case 2:
                                {
                                    int enteredID;
                                    printf("\nEnter your NSUAPC ID: ");
                                    scanf("%d",&enteredID);
                                    for(i=0;i<3;i++)
                                    {
                                        if(enteredID!=sclub[i].clubID)
                                        {
                                            printf("\nWrong ID!\n");
                                            return 0;
                                        }
                                        else if(enteredID==sclub[i].clubID)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else
                                            {
                                                return 0;
                                            }
                                            break;
                                        }

                                    }
                                    break;
                                }

                                case 3:
                                    {
                                        int enteredID;
                                        printf("\nEnter your NSUAPC ID: ");
                                        scanf("%d",&enteredID);
                                        for(i=0; i<3; i++)
                                        {
                                            if(enteredID!=sclub[i].clubID)
                                            {
                                                printf("\nWrong ID!\n");
                                                return 0;
                                            }
                                            else if(enteredID==sclub[i].clubID)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                                else
                                                {
                                                    return 0;
                                                }
                                                break;
                                            }

                                        }
                                        break;
                                    }
                                case 4:
                                    {
                                        int enteredID;
                                        printf("\nEnter your Debate club ID: ");
                                        scanf("%d",&enteredID);
                                        for(i=0; i<3; i++)
                                        {
                                            if(enteredID!=sclub[i].clubID)
                                            {
                                                printf("\nWrong ID!\n");
                                                return 0;
                                            }
                                            else if(enteredID==sclub[i].clubID)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                                else
                                                {
                                                    return 0;
                                                }
                                                break;
                                            }

                                        }
                                        break;
                                    }
                                case 5:
                                    {
                                        int enteredID;
                                        printf("\nEnter your Cultural club ID: ");
                                        scanf("%d",&enteredID);
                                        for(i=0; i<3; i++)
                                        {
                                            if(enteredID!=sclub[i].clubID)
                                            {
                                                printf("\nWrong ID!\n");
                                                return 0;
                                            }
                                            else if(enteredID==sclub[i].clubID)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[i].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[i].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                                else
                                                {
                                                    return 0;
                                                }
                                                break;
                                            }

                                        }
                                        break;
                                    }

                        }//bracket of nested switch
                        break;
                    }


                default:
                    {
                        printf("\nWrong input! Try again.");
                    }
            }
            printf("\nDo you want to do another transaction?\n");
            printf("Please press 1 for another transaction.\nPlease press 0 if you don't want to do any other transaction.");
            printf("\nYour choice: ");
            scanf("%d",&anotherTransaction);
            if(anotherTransaction==1)
            {
                mainMenu();
            }
            else if(anotherTransaction==0)
            {
                int logoutoption;
                printf("Please press 0 for logout.");
                scanf("%d",&logoutoption);
                if(logoutoption==0)
                {
                   printf("Logout successful");
                   return 0;
                }
                else
                {
                    printf("Account logged out due to invalid selection.");
                }
            }
            else
            {
                printf("Account suspended due invalid selection. Please login again via restarting the program.");
            }
        }


    }


    return 0;
}
void checkBalance(double *balance)
{
    printf("\nYour current account balance is %lf\n", *balance);
    return;
}
double deposit(double *balance)
{
    double depositamount;
    printf("\nEnter the amount you want to deposit: ");
    scanf("%lf",&depositamount);

    *balance+=depositamount;

    return *balance;
}
double withdraw(double *balance)
{
    double withdrawAmount;
    printf("\nEnter the amount you want to withdraw: \n");
    scanf("%lf",&withdrawAmount);
    if(*balance>withdrawAmount)
    {
        *balance-=withdrawAmount;
        printf("Your withdrawal amount is %.2lf\n",withdrawAmount);
    }
    else
    {
        printf("\nYou don't have enough money to withdraw!");

    }
    return *balance;
}
double clubFee(double *balance, double fee)
{
    if(*balance>fee)
    {
        *balance-=fee;
    }
    else
    {
        printf("\nYou don't have enough money to pay your club fee!");
    }
    return *balance;
}
void mainMenu()
{
    printf("1. Check your balance in NSU account\n");
    printf("2. Deposit money in NSU account\n");
    printf("3. Withdraw money from NSU account\n");
    printf("4. Pay your tution fee amount\n");
    printf("5. Check your course status for this semester\n");
    printf("6. Pay your club fee.\n");
    return;
}

void clubmenu()
{
    printf("\n1.Pay your IEEE club fee.");
    printf("\n2.Pay your NSUAPC club fee.");
    printf("\n3.Pay your NSU YES club fee.");
    printf("\n4.Pay your Debate club fee.");
    printf("\n5.Pay your Cultural club fee.");
    return;
}
double tutionFee(double *balance,double credit)
{
    double tutionFeeAmount;
    tutionFeeAmount= (6500*credit)+9500;

    printf("\nYour tuition for the semester is %lf:\n",tutionFeeAmount);
    int confirmTransact;
    if(*balance>tutionFeeAmount)
    {
        printf("Please enter 1 to pay your tuition fee and transact the money\n");
        scanf("%d",&confirmTransact);
        if(confirmTransact==1)
        {
            *balance-=tutionFeeAmount;
            printf("Transaction Successful! Your tuition fee: %lf taka has been paid.\n",tutionFeeAmount);
        }
    }
    else
    {
        printf("\nYou don't have enough money in your account to pay your tuition fees!\n");
        return 0;
    }
    return *balance;
}
