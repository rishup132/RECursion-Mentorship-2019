<<<<<<< HEAD
#include <stdio.h>
#include<string.h>

void main()
{
    char c[100];
    scanf("%[^\n]%*c", c);
    int x,i,d,k;
    x=strlen(c);
    d=x/2;
    k=0;
    for (i=0;i<d;i++)
    {
        if(c[i]!=c[x-i-1]){
         k=1;
         break;
    }
    }
    if(k==0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }

}
    
=======
#include <stdio.h>
#include<string.h>

void main()
{
    char c[100];
    scanf("%[^\n]%*c", c);
    int x,i,d,k;
    x=strlen(c);
    d=x/2;
    k=0;
    for (i=0;i<d;i++)
    {
        if(c[i]!=c[x-i-1]){
         k=1;
         break;
    }
    }
    if(k==0)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }

}
    
>>>>>>> 82aaa91b692f60f5a2d2e321b06d04e490e4f177
