#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,m;int k=0;

cin >> n>> m;int a[n][m];
for(int j=0;j<n;j++){
	if(j%2!=0)
k++;
		for(int i=0;i<m;i++){
		if((j%2==0)||(i==(m-1) &&(k%2!=0)) || (i==0 && k%2==0))
		
		cout << "#";
	else
		cout << ".";
}
		cout<<"\n";
	}
		return 0;
}
