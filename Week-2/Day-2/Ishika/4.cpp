#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,pos,p,d=0,c=0;

cin >> n;int a[n];
for(int i=0;i<n;i++)
	cin >>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c++;
			pos=i;
		}
		else
		{
			d++;
			p=i;
		}
	}
if(c==1)
		cout << pos+1;
		if(d==1)
			cout << p+1;
		return 0;
}
