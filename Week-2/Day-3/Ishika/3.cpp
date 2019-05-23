#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, k,pos,p,d=0,max=0;

cin >> n>> k;int a[n];
for(int i=0;i<n;i++)
	cin >>a[i];
	max=a[0]-a[1]-k;
	for(int i=0;i<n-1;i++)
	{
		d=a[i]-a[i+1]-k;
		if(d>max)
		max=d;
	}
	if(max<0)
	cout <<0;
	else
	cout << max;
		return 0;
}
