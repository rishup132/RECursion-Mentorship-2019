#include <stdio.h>

int main(){
	int num,p,i,j;
	scanf("%d", &num);
	p=0;
	int a[num];
	for(i=2;i<num;i++)
	{ int k;
	k=0;
	    for(j=2;j<i;j++)
	    {
	     if(i%j==0)
	         {
	             k=k+1; 
	             break;
	         }
	    }
	   if(k==0)
	   {
	     a[p]=i;
	     p=p+1;
	   }
	 }       
	    
	    
	    for(i=0;i<p;i++)
	     printf("%d ",a[i]);
	         
	         
}	         
