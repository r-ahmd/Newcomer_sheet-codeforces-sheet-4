#include<stdio.h>
#include<string.h>
 
int main()
{
    char s[1000000];
    gets(s);
 
 
    long long int l,count,i;
    if((s[0]>='a' && s[0]<='z' ) || (s[0]>='A' && s[0]<='Z' )) 
      count=1;
    else 
      count=0;
    l=strlen(s);
     for(i=0;i<l;i++)
     {
        if((s[i]==' ' || s[i]=='?' || s[i]==',' ||s[i]=='.' || s[i]=='!')&& ((s[i+1]>='a' && s[i+1]<='z' ) || (s[i+1]>='A' && s[i+1]<='Z' ))){
            count++;
     }
 
     }
 
     printf("%d", count);
 
    return 0;
}
