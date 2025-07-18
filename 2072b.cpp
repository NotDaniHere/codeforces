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
    ull a; string s; cin >> a >> s;
    ull b = count(s.begin(), s.end(), '-');
    ull amm_left = 0, amm_right = 0;
    if(b%2) {amm_left = b/2; amm_right=b/2; amm_right++;}
    else {amm_left=b/2; amm_right=b/2;}
    ull c = a-b;
    cout << (amm_left*amm_right)*c << '\n';
}
int main() {
    cases {
        solve();
    }

    return 0;
}