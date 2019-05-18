#include <stdio.h>

int main(){
    int size;
    int *a = (int*)malloc(size*sizeof(int));
	int i,j;
	while(i>=0)
	{ 
	    scanf("%d",&a[i]);
	    if(a[i]==42)
	   { break;}
	   printf("%d\n",a[i]);
	    i++;
	  
	}
}