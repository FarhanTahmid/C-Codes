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
    printf("                         \t\t\t******_______******               ");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t\t\tWelcome to NSU booth\n");
    printf("\t\t\t\t\t\t____________________");

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

    struct sclubfee sclub[3]={[0].fee=2500,[0].clubID=2031458642,[1].fee=2500,[1].clubID=2031326642,[2].fee=2500,[2].clubID=2031454642};

    printf("\nPlease Login to access your account.\n");
    printf("\n");
    long int enteredusername;
    long int enteredpass;
    printf("Enter the user name(Your NSU ID):  ");
    scanf("%li", &enteredusername);
    printf("\nEnter the password of your account:  ");
    scanf("%li", &enteredpass);
    int flag;
    for(i=0;i<3;i++)
    {
        if((enteredusername!=s[i].studentID) && (enteredpass!=s[i].password))
        {

            printf("\n");
            printf("\n\t\t\t\t\t\tLogin unsuccessful. Please try again.");
            return 0;
        }
        else if((enteredusername==s[i].studentID) && (enteredpass==s[i].password))
        {
            printf("\n");
            printf("\t\t\t\t\t\tLOGIN SUCCESSFUl!!!");
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
                printf("\n");
                printf("\nStudent name : %s\nStudent ID   : %li\nCurrent major: %s", s[i].name,s[i].studentID,s[i].major);
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
        printf("\n");
        printf("\n\t\t\t\t\t\t    Main Menu:\n");
        printf("\t\t\t\t\t\t   ------------\n");
        int anotherTransaction=1;
        mainMenu();
        while(anotherTransaction==1)
        {

            int option;
            printf("\nChoose an option: ");
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
                        printf("\nYour new balance is BDT %.2lf.\n",depositresult);
                        break;
                    }
                case 3:
                    {
                        double withdrawresult=withdraw(&studbalance);
                        printf("\nYour current balance is BDT %.2lf\n",withdrawresult);
                        break;
                    }
                case 4:
                    {

                        printf("\nHere, you can take theory courses for next semester:\nYou are allowed to take maximum 21 credits (7 courses).\n");
                        printf("\nEnter theory courses name: (Input example: cse115 cse173 cse225)\n");

                        double count=0;
                        int i=1;
                        char string[250];
                        scanf(" ");
                        gets(string);
                        printf("\nYour selected courses for next semester are:\n");
                        char* token=strtok(string," ");
                        while(token)
                        {
                            printf("%d.%s\n",i++,token);
                            token=strtok(NULL," ");
                            count++;
                        }
                        printf("\nYour total number of theory courses are: %.2lf\n",count);
                        printf("\nYou are allowed to take only one lab course for this semester\nEnter your lab course name: ");
                        char labcourse[10];
                        scanf(" ");
                        gets(labcourse);
                        printf("\nYour chosen lab course for next semester is: %s\n",labcourse);
                        double totalCredits= (count*3)+1;
                        printf("\nYou have taken total of %.1lf credits for the next semester.\n",totalCredits);
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
                            printf("\nStudent name: %s\n",s[0].name);
                            printf("\nCompleted Credit numbers: %d\n",s[0].completedcredit);
                            printf("\nSemester name: %s\n", s[0].semesterName);
                            printf("\nCurrent CGPA: %lf\n",s[0].cgpa);
                        }
                        else if(statusID==2031326642)
                        {
                            printf("\nYour course Status:\n");
                            printf("\nStudent name: %s\n",s[1].name);
                            printf("\nCompleted Credit numbers: %d\n",s[1].completedcredit);
                            printf("\nSemester name: %s\n", s[1].semesterName);
                            printf("\nCurrent CGPA: %lf\n",s[1].cgpa);
                        }
                        else if(statusID==2031454642)
                        {
                            printf("\nYour course Status:\n");
                            printf("\nStudent name: %s\n",s[2].name);
                            printf("\nCompleted Credit numbers: %d\n",s[2].completedcredit);
                            printf("\nSemester name: %s\n", s[2].semesterName);
                            printf("\nCurrent CGPA: %lf\n",s[2].cgpa);
                        }
                        break;
                    }
                case 6:
                    {
                        clubmenu();
                        int clubOption;
                        printf("\n\nEnter the option you want to select: ");
                        scanf("%d", &clubOption);
                        switch(clubOption)
                        {
                            case 1:
                                {
                                    int enteredID;
                                    printf("\nEnter your IEEE ID: ");
                                    scanf("%d",&enteredID);
                                        if(enteredID==2031458642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[0].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[0].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                        }

                                        else if(enteredID==2031326642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[1].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[1].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else if(enteredID==2031454642)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[2].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[2].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                            }
                                            else
                                            {
                                                printf("\nWrong ID!");
                                                return 0;
                                            }

                                        }

                                    break;

                                }
                            case 2:
                                {
                                    int enteredID;
                                    printf("\nEnter your NSUAPC ID: ");
                                    scanf("%d",&enteredID);
                                        if(enteredID==2031458642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[0].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[0].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                        }

                                        else if(enteredID==2031326642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[1].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[1].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else if(enteredID==2031454642)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[2].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[2].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                            }
                                            else
                                            {
                                                printf("\nWrong ID!");
                                                return 0;
                                            }

                                        }

                                    break;
                                }

                                case 3:
                                    {
                                        int enteredID;
                                        printf("\nEnter your NSUAPC ID: ");
                                        scanf("%d",&enteredID);
                                        if(enteredID==2031458642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[0].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[0].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                        }

                                        else if(enteredID==2031326642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[1].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[1].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else if(enteredID==2031454642)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[2].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[2].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                            }
                                            else
                                            {
                                                printf("\nWrong ID!");
                                                return 0;
                                            }

                                        }


                                        break;
                                    }
                                case 4:
                                    {
                                        int enteredID;
                                        printf("\nEnter your Debate club ID: ");
                                        scanf("%d",&enteredID);
                                        if(enteredID==2031458642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[0].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[0].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                        }

                                        else if(enteredID==2031326642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[1].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[1].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else if(enteredID==2031454642)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[2].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[2].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                            }
                                            else
                                            {
                                                printf("\nWrong ID!");
                                                return 0;
                                            }

                                        }
                                        break;
                                    }
                                case 5:
                                    {
                                        int enteredID;
                                        printf("\nEnter your Cultural club ID: ");
                                        scanf("%d",&enteredID);
                                        if(enteredID==2031458642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[0].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[0].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                        }

                                        else if(enteredID==2031326642)
                                        {
                                            printf("\nYour amount for payment is %lf\n", sclub[1].fee);
                                            int confirmClubPay;
                                            printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                            scanf("%d",&confirmClubPay);
                                            if(confirmClubPay==1)
                                            {
                                                double clubfeeresult=clubFee(&studbalance,sclub[1].fee);
                                                printf("\nClub Fee paid successfully!\n");
                                                printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                            }
                                            else if(enteredID==2031454642)
                                            {
                                                printf("\nYour amount for payment is %lf\n", sclub[2].fee);
                                                int confirmClubPay;
                                                printf("\nPress 1 to pay your club fee or press 0 to exit!\n");
                                                scanf("%d",&confirmClubPay);
                                                if(confirmClubPay==1)
                                                {
                                                    double clubfeeresult=clubFee(&studbalance,sclub[2].fee);
                                                    printf("\nClub Fee paid successfully!\n");
                                                    printf("\nYour current balance is %.2lf\n",clubfeeresult);
                                                }
                                            }
                                            else
                                            {
                                                printf("\nWrong ID!");
                                                return 0;
                                            }

                                        }
                                        break;
                                    }

                        }
                        break;
                    }


                default:
                    {
                        printf("\nWrong input! Try again.");
                    }
            }
            printf("\n\nDo you want to do another transaction?\n");
            printf("\nIf YES, press 1 for another transaction or press 0 if you don't want to do another transaction and quit.\n");
            printf("\n\n Enter your choice: ");
            scanf("%d",&anotherTransaction);
            if(anotherTransaction==1)
            {
                mainMenu();
            }
            else if(anotherTransaction==0)
            {
                int logoutoption;
                printf("\nPlease press 0 for logout.\n");
                scanf("%d",&logoutoption);
                if(logoutoption==0)
                {
                   printf("\nLogout successful\n");
                   return 0;
                }
                else
                {
                    printf("\nAccount logged out due to invalid selection.\n");
                }
            }
            else
            {
                printf("\nAccount suspended due invalid selection. Please login again via restarting the program.\n");
            }
        }


    }


    return 0;
}
void checkBalance(double *balance)
{
    printf("\nYour current account balance is BDT %.2lf.\n\n", *balance);
    return;
}
double deposit(double *balance)
{
    double depositamount;
    printf("\n\nHow much money you want to deposit?\n");
    printf("- ");
    scanf("%lf",&depositamount);

    *balance+=depositamount;

    return *balance;
}
double withdraw(double *balance)
{
    double withdrawAmount;
    printf("\nHow much money you want to withdraw: ");
    scanf("%lf",&withdrawAmount);
    if(*balance>withdrawAmount)
    {
        *balance-=withdrawAmount;
        printf("Your withdrawal amount is BDT %.2lf\n",withdrawAmount);
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
        printf("\nYou don't have enough money to pay for your club fee!");
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
    printf("\t\t\t\t\t\t    CLUB MENU\n");
    printf("\t\t\t\t\t\t   ------------");
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

    printf("\nYour tuition fees for next semester is BDT %.2lf\n",tutionFeeAmount);
    int confirmTransact;
    if(*balance>tutionFeeAmount)
    {
        printf("\nPlease enter 1 to pay for your tuition fees and transact the money.\n");
        scanf("%d",&confirmTransact);
        if(confirmTransact==1)
        {
            *balance-=tutionFeeAmount;
            printf("\nTransaction Successful! Your tuition fees: BDT %.2lf has been paid.\n",tutionFeeAmount);
        }
    }
    else
    {
        printf("\nYou don't have enough money in your account to pay for your tuition fees!\n");
        return 0;
    }
    return *balance;
}
