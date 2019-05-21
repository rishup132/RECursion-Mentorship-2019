#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,v,pos,p,d=0,c=0,e=0,mi;
	cin >> n >> v;
	int a[n];int b[100000],st[100000];
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	 	b[a[i]];
		for(int j=0;j<a[i];j++)
			cin >> b[j];
		for(int j=0;j<a[i];j++)
		{
			
			if(b[j]<v)
			{
				
				st[c++]=i+1;;
				break;
			}
			
		}		
	}
	
	cout <<c <<endl;
	for(int i=0;i<c;i++)
	cout << st[i] <<" ";
	return 0;
}
