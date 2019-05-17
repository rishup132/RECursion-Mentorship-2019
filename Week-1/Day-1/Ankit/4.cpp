#include<stdio.h>
int main()
{
int n,i;
scanf("%d\n",&n);
int a[n];
for (i=1;i<=n;i++)
{
int b,d,c;
d=0;
scanf("%d %d \n",&b,&c);
d=c+b;
a[i-1]=d;
}
for (i=1;i<=n;i++)
print("%d",a[i-1]);
}
