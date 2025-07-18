#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a,b,c; cin >> a >> b >> c;
    for(int i = min(b,c); i <= max(b,c); i++) {
        if(abs(b - i) < abs(b - a) && abs(c - i) < abs(c - a) && i != a)  {YES; return;}
    }
    NO; return;
    
}
int main() {
    cases {
        solve();
    }

    return 0;
}