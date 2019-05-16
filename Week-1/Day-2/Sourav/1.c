// Solution Of https://www.codechef.com/problems/HS08TEST
#include<stdio.h>
int main ()
{   int x;
    float y;
    scanf ("%d",&x);
    scanf("%f",&y);
    
    if (x%5==0 && (x+0.50)<y)
    { y=y-x-0.50 ;
       printf ("%0.2f",y);
     }  
else 
    {
    printf ("%0.2f",y);
    }
    
    return 0;
}
