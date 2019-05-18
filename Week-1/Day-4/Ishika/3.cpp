#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int l,r,k,c=0;

cin >> l >> r >> k;
for(int i=l;i<=r;i++)
{
	if(i%k==0)
	c++;
}
cout  << c<< endl;

	return 0;
}

