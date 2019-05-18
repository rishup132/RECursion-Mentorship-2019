#include <stdio.h> 

int main() {
	int n,i;
	scanf("%d",&n);
	int s[n];
	for (i=0;i<n;i++)
	{
	    int a,b,d;
	    scanf("%d %d",&a,&b);
	    d=a%b;
	    s[i]=d;
	}
	for(i=0;i<n;i++)
	 printf("%d\n",s[i]);
}	 
	 
