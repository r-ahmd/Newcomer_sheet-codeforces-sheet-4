#include<stdio.h>
#include<string.h>
 
int substring(char* source, int from, int n, char* target)
{
    int length, i;
    for (length = 0; source[length] != '\0'; length++)
        ;
 
    if (from > length) 
    {
       return 1;
    }
 
    if ((from + n) > length) 
    {
      //get substring till end
      n = (length - from);
    }
 
    //get substring in target
    for (i = 0; i < n; i++) {
        target[i] = source[from + i];
    }
    target[i] = '\0'; //assign null at last
 
    return 0;
}
 
int main()
{
   int i,j;
    char s[10000];
    gets(s);
    int len = strlen(s);
    if(len<100)
        return 0;
    i = 0;
    while(s[i] != '?') 
        i++;
        
    i++;
 
    char sub[10000];
    int nl = substring(s, i,len, sub);
 
    for(int i = 0; i < strlen(sub); i++)
    {
        if(sub[i] != '&' && sub[i] != '=') 
            printf("%c", sub[i]);
        else if(sub[i] == '=') 
            printf(": ");
        else 
            printf("\n");
 
    }
    
    return 0;
}
