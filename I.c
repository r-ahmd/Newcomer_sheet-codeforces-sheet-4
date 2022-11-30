#include <stdio.h>
#include<string.h>
 
int main() 
{
   char s[1000];
   int i, len, flag=1;
   gets(s);
   i=0;
   len=strlen(s)-1;
   while(len>i)
   {
      if(s[i]==s[len])
         flag==1;
      else
         flag=0;
      i++;
      len--;
   }
   if(flag==1)
   printf("YES");
   else
   printf("NO");
   
   
 
   return 0;
   
}
