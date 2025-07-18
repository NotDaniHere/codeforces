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
    int a,b; string s; cin >> a >> b >> s;
    if(a >= 2*b && count(s.begin(), s.end(), '1') > b) cout << "Bob\n";
    else cout << "Alice\n";
    return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}