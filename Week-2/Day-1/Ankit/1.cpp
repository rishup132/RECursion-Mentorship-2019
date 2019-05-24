#include<stdio.h>

int main()
{
     int n,i,j;
    scanf("%d\n",&n);
    int  a[n+2],b[3];
    for(i=0;i<n;i++)
    {    
        
        scanf("%d",&a[i]);
    }
    int  p=0,o=0;
    for(i=n;i<n+2;i++)
    {    
        a[i]=0;
    }
       
        
        
        int h=0,k;
        b[0]=a[0];
        b[1]=a[1];
        b[2]=a[2];
        
        
         for(k=1;k<n;k++)
        {   
            if((3*k)<n)
            {
            b[h]=b[h]+a[3*k];
        
            }
            if(((3*k)+1)<n)
            {
            b[h+1]=b[h+1]+a[(3*k)+1];
            
            }
            if(((k*3)+2)<n)
            {
            b[h+2]=b[h+2]+a[(k*3)+2];
            
            }
        }
        
         for(j=0;j<3;j++)
        {
            if(b[j]>p)
            {
             p=b[j];
             o=j+1;
            }
        }
        
        
            if(o==2)
            {
             printf("biceps");
             
            } 
            if(o==3)
            {
           printf("back");
             
            }
            if(o==1)
            {
            printf("chest");
             
            }
        

    
        

    
}
