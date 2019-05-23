#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    string str;
    cin >> str;
    char foo;
    int cnt = 1;
    for (int i = 0; str[i]; ++i) {
        assert(str[i] >= 'a' && str[i] <= 'z');
        if(i == 0) foo = str[i];
        else {
            if(str[i] == foo)
                cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}