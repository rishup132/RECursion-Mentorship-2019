#include<stdio.h>
int main()
{
    int n;
	scanf("%d",&n);
	int i,a[n];
		
	if(n%2!=0)
	 printf("-1\n");
	 
	else
	  {
	 
     	for(i=1;i<=n;i++)
    	{
		  if(i%2!=0)
		   {
		     a[i]=i+1;
	       }
		   else
		   {
		     a[i]=i-1;	   	
		   }	
	    }
	
	    for(i=1;i<=n;i++)
       	 {
		   printf("%d ",a[i]);
	     }
      }
}
