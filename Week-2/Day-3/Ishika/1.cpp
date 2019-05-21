#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k;int max,f=0;

cin >> n >> k;int a[n],b[n];
for(int j=0;j<n;j++)
		{		
		cin >> a[j];cin >> b[j];}
			if(b[0]>k)
		max=a[0]-(b[0]-k);
		else
		max=a[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>k)
		f=a[i]-(b[i]-k);
		else
		f=a[i];
		if(f>max)
		max=f;
		}
				
				
				
			
						cout << max;
					
	
		return 0;
}

