#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i;
   scanf("%[^\n]%*c", s); 
    for(i=0;s[i]!='\0';i++)
    {
          if(s[i] >= 'a' && s[i] <= 'z') {
         s[i]=toupper(s[i]);
      }
            else {
         s[i] = s[i] + 32;
      }
 
    }
    printf("%s",s);
}
