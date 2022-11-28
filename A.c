#include <stdio.h>
#include <string.h>
int main()
{
   char s[1001], t[1001];
   gets(s);
   gets(t);
   printf("%d %d\n", strlen(s), strlen(t));
   printf("%s %s", s, t);
   
   return 0;
}
