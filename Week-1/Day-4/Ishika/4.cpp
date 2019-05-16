#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n;
	cin >> n;long long a[n],c;
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<3;i++)
	{
	c=0;
	for(int j=i;j<n;j+=3)
	c=c+a[j];
	cout  << c << " ";
	}
	return 0;
}

