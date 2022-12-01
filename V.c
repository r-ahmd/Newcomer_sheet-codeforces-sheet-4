#include<stdio.h>
#include<string.h>
 
 
int main()
{
   char s[1000000];
   gets(s);
   int len = strlen(s);
   for(int i=0; i<len; i++)
   {
      if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T')
      {
         i+=4;
         printf(" ");
      }
      else
         printf("%c", s[i]);
   }
   
   return 0;
}
