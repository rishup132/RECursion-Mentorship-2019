#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,pos,p,d=0,min,max=0;

cin >> n;int a[n];
for(int i=0;i<n;i++)
	cin >>a[i];min=10000000;
	for(int i=1;i<n-1;i++)
	{
		max=a[i+1]-a[i-1];
		for(int j=i+1;j<n-1;j++)
		{
			d=a[j+1]-a[j];
			if(max <d)
			max=d;
		}
		for(int k=i-1; k>0;k--)
		{
			d=a[k]-a[k-1];
				if(max <d)
			max=d;
			
		}
		if(max<min)
		min=max;
	}


	cout << min;
		return 0;
}
