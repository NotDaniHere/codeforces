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
    int a,b,c; cin >> a >> b >> c;
    double target = a+b+c; target/=3;
    double check = a+c; check/=2;
    if((a+b+c) % 3 == 0 && target<=check) YES;
    else NO;
    return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}