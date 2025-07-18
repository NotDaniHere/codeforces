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
    int a; string s; cin >> a >> s;
    s = '0'+s; 
    int ans = 1;
    int changes = 0;
    char prev_c = s[0];
    for(auto c : s) {
        if(c != prev_c) changes++;
        ans++;
        prev_c = c;
    }
    ans-=2;
    if(changes >= 3) ans-=2;
    else if(changes == 2) ans-=1;
    cout << ans+changes << '\n';

}
int main() {
    cases {
        solve();
    }

    return 0;
}