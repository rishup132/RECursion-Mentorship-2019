#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,pos,p,d=0,c=0,e=0,mi;

cin >> n;int a[n],b[n];
for(int i=0;i<n;i++){

	cin >>a[i];
	b[i]=i+1;
}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				
			}
		
		}
	
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
			c++;
		else if(a[i]==2)	
			d++;
		else
			e++;
		
	}
	 mi=(int)min(c,d);
	mi=(int)min(mi,e);
	cout << mi << endl;
	if(mi==0)
	return 0;
	for(int i=0;i<mi;i++)
	{
		cout << b[c-1-i]<< " "<< b[c+i] << " "<< b[n-1-i] << endl;
	}
	return 0;
}
