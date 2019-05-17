include<stdio.h>
 int main()
 {
 int n1;
 scanf("%d",n1);
 for( i=1;i<=n1,i++)
 {
 int d,n,sum=0;
 scanf("%d\n",&n);
 while (n>0)
 {
 d=n%10;
 sum=sum + d;
 n=n/10;
 }
 printf("%d\n",sum);
 return 0;
 }
 
