#include<stdio.h>
typedef struct covid19Info
{
    char countryName[30];
    int numberOfCases;
    int numberOfDeaths;
    double currentPositiveRate;

}records;
int main()
{

    int n;
    printf("Enter the number of country records you want to show: ");
    scanf("%d", &n);
    records r[n],r1={"Bangladesh",40000,5000,60};
    printf("Enter the names of the countries, number of cases, number of deaths and current positive rate.\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("Country name: ");
        fflush(stdin);
        fgets(r[i].countryName,30,stdin);
        printf("Enter the total number of cases: ");
        scanf("%d",&r[i].numberOfCases);
        printf("Enter the total number of deaths: ");
        scanf("%d",&r[i].numberOfDeaths);
        printf("Enter the current positive rate: ");
        scanf("%lf",&r[i].currentPositiveRate);
    }
    for(i=0;i<n;i++)
    {
        printf("Country name: %s",r[i].countryName);
        printf("\nTotal number of cases: %d",r[i].numberOfCases);
        printf("\nTotal number of deaths: %d",r[i].numberOfDeaths);
        printf("\nCurrent positive rate: %.2lf percent\n",r[i].currentPositiveRate);
    }
    printf("\nFor Bangladesh:");
    printf("\nCountry name: %s",r1.countryName);
    printf("\nTotal number of cases: %d",r1.numberOfCases);
    printf("\nTotal number of deaths: %d",r1.numberOfDeaths);
    printf("\nCurrent positive rate: %.2lf",r1.currentPositiveRate);
    printf("%");

    return 0;
}
