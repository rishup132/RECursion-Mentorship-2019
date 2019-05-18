#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
	float f,d;
	scanf("%f",&f);
	if(n%5==0 && n<=(f-0.5))
	{
	 d=f-n-0.5;
	 printf("%0.2f",d);
	}
	else
	{
	  printf("%0.2f",f);
	}
	
	return 0;
}
