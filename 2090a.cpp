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
    int x,y,a; cin >> x >> y >> a;
    int left = a%(x+y);
    if(left - x >= 0) YES;
    else NO;


}
int main() {
    cases {
        solve();
    }

    return 0;
}