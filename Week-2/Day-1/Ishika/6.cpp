#include<iostream>
#include<math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k,c=0,w=0;

cin >> n >>k;int a[n];
for(int i=0;i<n;i++)

	cin >>a[i];
	for(int i=0;i<n;i++){
	

	a[i]=a[i]+k;

	if(a[i]<=5)
	c++;
	if(c==3)
	{
		c=0;
		w++;
	}
}
cout << w;
return 0;}
