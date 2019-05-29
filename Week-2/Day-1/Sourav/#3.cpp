#include <stdio.h>
int main ()
{
	int a,b,i,c1=0,c2=0,c3=0;
	scanf("%d %d",&a,&b);
	for(i=1;i<=6;i++)
	{
	    if(abs(a-i) < abs(b-i))
		  c1++;
		else if( abs(a-i) > abs(b-i))
		  c2++;
		else
		  c3++;    
	}
	printf ("%d %d %d\n",c1,c3,c2);
}
