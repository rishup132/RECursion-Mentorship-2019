#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define int unsigned long long int
#define mod 1000000007

int32_t main()
{
    fastIO;
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b;
        n=b-a+1;
        a=2*a-1;
        b=2*b-1;
        int ans=((a+b)/2)%mod;
        ans=(ans*n)%mod;
        cout<<ans<<"\n";
    }
    
    return 0;
}