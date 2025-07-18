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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    int ans = 0;

    if (x < y) {
        if (k >= a) {
            int cnt = (k - a) / x + 1;
            k -= cnt * x;
            ans += cnt;
        }
        if (k >= b) {
            int cnt = (k - b) / y + 1;
            k -= cnt * y;
            ans += cnt;
        }
    } else {
        if (k >= b) {
            int cnt = (k - b) / y + 1;
            k -= cnt * y;
            ans += cnt;
        }
        if (k >= a) {
            int cnt = (k - a) / x + 1;
            k -= cnt * x;
            ans += cnt;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cases {
        solve();
    }
    return 0;
}
