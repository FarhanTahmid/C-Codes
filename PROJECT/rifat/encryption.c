#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

char password[]="close";
char decrypt[] = "open";
char input[20];
char filename[32];

FILE *fp;

int c;
int main()

{

int status;

printf("Please enter the password to Encrypt the text:");
fgets(input,20,stdin);
sscanf(input,"%s",input);

    if(strcmp(password,input)==0)

    {
        if((fp=fopen("rifat.txt","r")) != NULL)

        {
            while((c=getc(fp)) != EOF)

            {
                fp=fopen("rifat.txt", "w");
                c= c+1;
                fputc(c, fp);
                putchar(c);
            }

            fclose(fp);

            }
    }

    else if(strcmp(decrypt,input) == 0)

    {
        if((fp=fopen("rifat.txt","r")) != NULL)

            {
                while((c=getc(fp)) !=EOF)

                    {
                        c=c-1;
                        fputc(c, fp);
                        putchar(c);
                    }

                    fclose(fp);

                    }
    }
    else if(strcmp(password,input) != 0)

    {
         status = remove("rifat.txt");
    }

    else
    {
        perror("Error:");
        return(-1);

    }

}
