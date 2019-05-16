//Solution Of https://www.codechef.com/problems/FLOW004
#include<stdio.h>
int main()
{
	int t,n,i,fd,ld;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		ld=n%10;
		while(n!=0)
		{
			fd=n%10;
			n=n/10;
		}
		printf("%d\n",(fd+ld));
	}return 0;
}
