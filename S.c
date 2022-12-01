#include<stdio.h>
#include<string.h>
 
int main()
{
   char s[1000];
   gets(s);
   int l=strlen(s);
   int CoL = 0; /// Count from left
   int CoR = 0; /// Count from right
   int flag=0;
   for(int i =0; s[i] != '\0'; i++)
   {
      if(s[i] == 'L')
         CoL++;
      else if(s[i] == 'R')
         CoR++;
      if(CoL==CoR)
         flag++;
   }
    printf("%d\n", flag);
    for(int i =0; s[i] != '\0'; i++)
    {
        if(s[i] == 'L')
        {
            CoL++;
            printf("%c", s[i]);
        }
        else if(s[i] == 'R')
        {
            CoR++;
            printf("%c", s[i]);
        }
        if(CoL==CoR)
        {
            flag++;
            printf("\n");
        }
    }
 
    
    return 0;
}
