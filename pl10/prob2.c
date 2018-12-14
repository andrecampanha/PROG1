#include <stdio.h>
#include <string.h>

#define MAX_STRING 100

int capicua(char *c)
{
   int len = strlen(c);
   int j = len / 2;
   for(int i = 0; i < j; i++)
       if(c[i] != c[len - i - 1]) return 0;
  
   return 1;
}

int main()
{
   char c[MAX_STRING];
   while(fgets(c, MAX_STRING, stdin))
   {
       c[strlen(c) - 1] = '\0';
       printf("%s %sé capicua\n", c, capicua(c) ? "" : "não ");
   }
}