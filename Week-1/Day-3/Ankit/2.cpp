#include <stdio.h>

int main(){
	int num,i,s;
	s=1;
	scanf("%d", &num);              			// Reading input from STDIN
	   for (i=1;i<=num;i++)
	    s=s*i;
	 printf("%d",s) ;  
}
