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
    int w,h,a,b; cin >> w >> h >> a >> b;
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    bool u = true;
    if(x1 < x2) {
        x1+=a;
        if((x2-x1) % a != 0) {NO; return; }
    } else {
        x2+=a;
        if((x1-x2) % a != 0) {NO; return;}
    }
    if(y1 < y2) {
        y1+=b;
        if((y2-y1) % b != 0) {NO; return;}
    } else {
        y2+=b;
        if((y1-y2) % b != 0) {NO; return;}
    }
    YES; return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}