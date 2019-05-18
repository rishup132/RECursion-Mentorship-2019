#include <stdio.h> 
int main()
 {
	int t;
	scanf("%d", &t);
	while (t--) 
	     {		
		   int a, b;
		   scanf("%d %d", &a, &b);
		   int sum = a + b;
	   	   printf("%d\n", sum);
	     }
	return 0;
}
