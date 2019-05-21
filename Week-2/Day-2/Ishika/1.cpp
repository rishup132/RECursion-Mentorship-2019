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
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			 c=0;
			if( j+1<n && a[i][j+1]=='o' )
			c++;
			if(j-1>=0 && a[i][j-1]=='o')
			c++;
			if(i+1 <n && a[i+1][j]=='o')
			c++;
			if(i-1>=0 && a[i-1][j]=='o')
			c++;
			if(c%2!=0)
		{
			cout << "NO";
			return 0;
		}
		}
		
	}
	cout << "YES";
	return 0;
}
