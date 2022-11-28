#include <stdio.h>
#include<string.h>
 
int max(int a, int b)
{
   if(a>b)
      return a;
   else
      return b;
}
 
int main() 
{
   char x[21], y[21];
   scanf("%s", &x);
   scanf("%s", &y);
   int flag = 0;
   int a = max(strlen(x),strlen(y));
   for(int i=0;i<=a;i++)
   {
     if(x[i]>y[i])
     {
         printf("%s", y);
         flag = 0;
         break;
     }
     else if(x[i]<y[i])
     {
         printf("%s", x);
         flag = 0;
         break;
     }
     else
      flag=-1;
   }
   if(flag==-1)
   {
      if(strlen(x)>strlen(y))
         printf("%s", y);
      else if (x==y)
         printf("%s", x);
      else
         printf("%s", x);
   }
      
 
}
