#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a,b,c,d; cin >> a >> b >> c >> d;
    bool x = ((2 * min(a,b)) + 2) >= max(a,b);
    bool y = ((2 * min(c-a,d-b)) + 2) >= max(c-a, d-b);
    if(x && y) YES;
    else NO;
}
int main() {
    cases {
        solve();
    }

    return 0;
}