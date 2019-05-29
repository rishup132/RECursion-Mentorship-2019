#include<stdio.h>
int main()
{  
	int n;
	scanf("%d",&n);
	int i,a[n];
	int c1=0,c2=0,c3=0;
	 for(i=1;i<=n;i++)
	   scanf("%d",&a[i]);
	   
	for(i=1;i<=n;i++)   
	  {
	  	if(i%3==1)
	  	  c1+=a[i];
	  	else if(i%3==2)
		   c2+=a[i] ;
		else
		   c3+=a[i];		      
	  }
	 
	  if(c1>=c2 && c1>=c3)
	    printf("chest\n");
	  else if(c2>=c1 && c2>=c3)  
	    printf("biceps\n");
	  else 
	    printf("back\n")  ;
}
