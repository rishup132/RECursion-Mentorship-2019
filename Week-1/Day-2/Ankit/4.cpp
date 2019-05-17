#include <stdio.h>

int main(void) {
    int g,i;
    scanf("%d",&g);
    int y[g];
    for (i=0;i<g;i++)
    {
    int n,d,k,p;
	int sum=0;
	scanf("%d",&n);
	 p=0;
	while(n>0)
	{  
	    d=n%10;
	    if(p==0)
	     sum=sum+d;
	    k=n;
	    n=n/10;
	    if(n==0)
	     sum=sum+k;
	    p=p+1;
	}
	y[i]=sum;
    }
    for(i=0;i<g;i++)
     printf("%d\n",y[i]);
	
	return 0;
}

