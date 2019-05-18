#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	int s[n];
	for (i=0;i<n;i++)
	{
	    int a;
	    scanf("%d",&a);
	    
	    int k;
	    k=a%100;
	    
	    if((a%4==0 && k!=0) ||(a%400==0))
	    {
	     s[i]=0;
	
	    }
	    else
	    { int o=1;
	    
	        while(o<=8)
	        {   
	            a=a+1;
	            
	            k=a%100;
	            
	           if((a%4==0 && k!=0)||(a%400==0)){
	             s[i]=a;
	            break;
	            }
	            o=o+1;
	        }
	    }
	}
	for(i=0;i<n;i++)
	{
	    if(s[i]==0)
	     printf("It is a leap year.\n");
	    else
	       printf("Not a leap year. Suggested: %d\n",s[i]);
	}
	return 0;
}

