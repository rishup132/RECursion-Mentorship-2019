#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,d,pos,p,c=0,s=0;

cin >> n >> d;int a[n];
for(int i=0;i<n;i++)
	cin >>a[i];
	for(int i=0;i<n;i++)
	{
		s=s+a[i];
}
s=s+(n-1)*10;

if(s>d)
			cout << -1;
			else
			{
				p=d-s;
				p=p/5+(n-1)*2;
				cout <<p;
			}
		return 0;
}

