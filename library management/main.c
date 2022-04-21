#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//book structure
typedef struct Book
{
    char title[20];
    char author[20];
    int page;
    float price;

}Book;
Book *book;

int count = 0;
int size;

//new book er jonno func
void addbooks()
{
    system("cls");
    system("color 41");
    printf("\n******* Add New Book Detail*******");
    printf("\nEnter book title : ");
    gets(book[count].title);
    printf("\nEnter book author : ");
    fflush(stdin);
    gets(book[count].author);
    printf("\Enter Book price : ");
    scanf("%f",&book[count].price);
    printf("\nEnter book page : ");
    scanf("%d",&book[count].page);
    count ++;
}

//shb boi record
void showAllBook()
{
    int i;
    system("cls");
    printf("\n\n\t\t\t*******BOOK DETAILS********");
    printf("\n\n\t\t\t---------------------------");
    printf("\n\n\t\t\tBook Title\t\tBook Author\t\tBook Price\t\tBook page");
    printf("\n\n\t\t\t----------------------------------------------------");
    for(i = 0;i < count; i++)
    {
        printf("\n\t\t%s",book[i].title);
        printf("\n\t\t%s",book[i].author);
        printf("\n\t\t%f",book[i].price);
        printf("\n\t\t%s",book[i].page);
    }
}
//search book
void searchbooks()
{
    char btitle[10];
    int i;
    printf("\nEnter Book title : ");
    gets(btitle);
    for(i = 0; i < count ; i++)
        if(stricmp(book[i].title,btitle)==0)
            system("cls");
            printf("\n\n\t\t\t*******BOOK DETAILS********");
            printf("\n\n\t\tBook title  :  %s",book[i].title);
            printf("\n\n\t\tBook title  :  %s",book[i].author);
            printf("\n\n\t\tBook title  :  %f",book[i].price);
            printf("\n\n\t\tBook title  :  %d\n",book[i].page);
}

//remove book

void removeBook()
{
    char btitle[10];
    int i,j;

    printf("\nEnter Book title to remove : ");
    gets(btitle);
    for(i = 0 ; i < count ; i++)
        if(stricmp(book[i].title,btitle)==0)
            system("cls");
            printf("\n\n\t\t\t****Remove Book Details****");
            printf("\n\n\t\tBook title  :  %s",book[i].title);
            printf("\n\n\t\tBook title  :  %s",book[i].author);
            printf("\n\n\t\tBook title  :  %f",book[i].price);
            printf("\n\n\t\tBook title  :  %d\n",book[i].page);
                for(j = i ; j < count - 1; j++)
                    book = book+1;
                count--;
                return;
}

//update
void updateBook()
{
    char btitle[10];
    int i,j;

    Book temp;
    printf("\nEnter Book title to add : ");
    gets(btitle);
    for(i = 0 ; i < count ; i++);
        if(stricmp(book[i].title,btitle)==0)
            system("cls");
            printf("\n\n\t\t\t***Book Details****");
            printf("\n\n\t\tBook title  :  %s",book[i].title);
            printf("\n\n\t\tBook title  :  %s",book[i].author);
            printf("\n\n\t\tBook title  :  %f",book[i].price);
            printf("\n\n\t\tBook title  :  %d\n",book[i].page);

            printf("\n***** Add New Book Detail ***** ");
            printf("\nEnter Book Title :");
            gets(book[i].title);
            printf("\nEnter Book Author : ");
            fflush(stdin);
            gets(book[i].author);
            printf("\nEnter Book Price : ");
            scanf("%f", &book[i].price);
            printf("\nEnter book page : ");
            scanf("%d",&book[i].page);

}
void main()
{
    int choice;
    printf("\nEnter total no. of books you want to add in library");
    scanf("%d",&size);
    //boooka arary
    book = (Book*) malloc(sizeof(Book)*size);
    do
    {
        system("cls");
        printf("\n1.Add Book\n2.Show All Books\n3.Search Books\n4.Update Books\n5.Remove books");
        scanf("%d",&choice);
        fflush(stdin);
        switch(choice)
        {
             case 1:
            addbooks();
            break;
        case 2:
            showAllBook();
            break;
        case 3:
            searchbooks();
            break;
        case 4:
            updateBook();
            break;
        case 5:
            removeBook();
            break;
        case 6:

            return;

        }
       getch();
    }
    while(1);
}
