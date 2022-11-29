#include <stdio.h>
#include<string.h>
 
int main() 
{
   int n;
   scanf("%d", &n);
   char s[100000];
   while(n--)
   {
      int flag=0;
      scanf("%s", &s);
      for(int i=0; i<strlen(s)-2; i++)
      {
         if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' || s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
         {
            flag=1;
            break;
         }
      }
      if(flag==1)
         printf("Good\n");
      else
         printf("Bad\n");
   }
   
   
 
   return 0;
   
}
