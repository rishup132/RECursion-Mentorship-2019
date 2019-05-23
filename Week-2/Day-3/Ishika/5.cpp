#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,pos,p,d=0,c=0,e=0,mi;

cin >> n;char a[n][n];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)

	cin >>a[i][j];
	char ch=a[0][0],h=a[0][1];
	if(ch==h)
	{
		cout << "NO";
				return 0;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j && ch!=a[i][j])
			{
				cout << "NO";
				return 0;
			}
			else if(ch != a[i][j] && (i+j)==(n-1) )
			{
				cout << "NO";
				return 0;
			}
			else if((h!=a[i][j]) && (i!=j) && (i+j)!=(n-1) )
			{
				cout << "NO" ;
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}
