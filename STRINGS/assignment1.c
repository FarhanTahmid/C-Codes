#include <stdio.h>

char* strjoin(char d[],char s[])
 {
  int j;

  int count = 0;
  while (d[count] != '\0') 
  {
    count++;
  }

  for (j = 0; s[j] != '\0';j++) 
  {
    d[count] = s[j];

     count++;
  }

  d[count] = '\0';


  return d;
  }
int main()
{
    char s1[100],s2[100];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    printf("%s",strjoin(s1,s2));
    return 0;
}