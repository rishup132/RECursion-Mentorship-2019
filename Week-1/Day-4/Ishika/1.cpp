<<<<<<< HEAD
#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t,c=0;;

cin >> t;
for(int i=2;i<=t;i++)
{
	c=0;
	for(int j=2;j*j<=i;j++)
	if(i%j==0)
	c++;
	if(c==0)
cout  << i<< " ";
}
	return 0;
}

=======
#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int t,c=0;;

cin >> t;
for(int i=2;i<=t;i++)
{
	c=0;
	for(int j=2;j*j<=i;j++)
	if(i%j==0)
	c++;
	if(c==0)
cout  << i<< " ";
}
	return 0;
}

>>>>>>> 82aaa91b692f60f5a2d2e321b06d04e490e4f177
