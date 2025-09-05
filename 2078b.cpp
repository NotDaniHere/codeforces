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
    int a,b; cin >> a >> b;
    bool upair = b%2;
    for(int i = 1; i <= a; i++) {
        if(upair && i != a) cout << a << ' ';
        if(upair && i == a) cout << a-1 << ' ';
        if(!upair && i != a - 1) cout << a-1 << ' ';
        if(!upair && i == a-1) cout << a << ' ';
    }
    cout << '\n';

}
int main() {
    cases {
        solve();
    }

    return 0;
}