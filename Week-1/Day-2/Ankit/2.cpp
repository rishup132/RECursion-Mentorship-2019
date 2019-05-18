#include <stdio.h>

int main(void) {
    int a,i;
    scanf("%d\n",&a);
    int b[a];
    
    for(i=0;i<a;i++)
      {      int o;
          	scanf("%d",&o);
          	b[i]=o;
      }
	
	for(i=0;i<a;i++)
{
	int n,d,sum;
	sum=0;
    n=b[i];
	while(n>0)
	{   
	    d=n%10;
	    sum=sum+d;
	    n=n/10;
	}
	printf("%d\n",sum);
	
}	
	
	
	return 0;
}

