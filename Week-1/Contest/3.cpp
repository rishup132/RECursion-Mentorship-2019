/*
    author : alucard_01
    NIT Durgapur
*/

/*#include<iostream>
#include<functional>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>*/
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define vec(x) vector<x> 
#define st(x) set<x> 
#define pi(x,y) pair<x,y>
#define mpp(x,y) map<x,y>
#define pqq(x) priority_queue<x> 
#define min_heap(x) priority_queue<x, vector<x>, greater<x> >
#define all(x) x.begin(),x.end()
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define rel(i,x,y) for(ll i=x-1;i>=y;i--)
#define rev(x) reverse(all(x))
#define mem(x,a) memset(x,a,sizeof(x))
#define mod 1000000007
#define nxt_per(x) next_permutation(x.begin(),x.end())
#define pb push_back
#define pf push_front
#define indexof order_of_key
#define valueat find_by_order
#define myds tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> 

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int dxx[8]={0,0,1,-1,-1,-1,1,1};
int dyy[8]={1,-1,0,0,-1,1,1,-1};

/*
unordered_map<ll,ll> um
um.reserve(1<<15);
um.max_load_factor(0.25);
*/

using namespace std;
//using namespace __gnu_pbds;

int32_t main()
{
    //Random no. generator
    //mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    fastio;
    //best of luck don't loose hope man    

    int t;
    cin>>t;
    while(t--)
    {    ll a,b;    
        cin>>a>>b;
        int a1=floor(log2(a))+1,b1=floor(log2(b))+1;
        ll a2=pow(2,a1)-1,b2=pow(2,b1)-1;
        if(a+b>max(a2,b2))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}