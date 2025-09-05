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
    int a; cin >> a;
    vi A(a); for(int i = 0; i < a; i++) cin >> A[i];
    ll y = (2 * A[0] - A[1]) / (a + 1);
    ll x = A[1] - A[0] + y;

    if(y < 0 || x < 0) {
        NO;
        return;
    }
    for(int i = 0; i < a; i++) {
        A[i] -= x * (i + 1);
        A[i] -= y * (a - i);
    }
    if(count(A.begin(), A.end(), 0) == a) YES;
    else NO;



}
int main() {
    cases {
        solve();
    }

    return 0;
}