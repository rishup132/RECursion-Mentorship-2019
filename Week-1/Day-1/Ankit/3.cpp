#include<stdio.h>
int main(){
	     int i,j;
	     int a[7000];
	   for(i=0;i<7000;i++)
	    {   int k;
	        scanf("%d\n",&k);
	        a[i]=k;
	        if(k==42)
	        {
	            scanf("%d",&a[i+1]);
	            break;
	        }
	        
	   }


for(j=0;j<=(i-1);j++)
{
     printf("%d\n",a[j]);
      
}
}
