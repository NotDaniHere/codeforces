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
    int a,b; cin >> a >> b;
    int max_current = 0;
    int min_current = INT_MAX;
    for(int i = 0; i < a; i++) {
        int c; cin >> c;
        max_current = max(max_current, c);
        min_current = min(min_current, c);
    }
    if(b > max_current) {
        cout << b-min_current << '\n';
    } else if(b < min_current) {
        cout << max_current - b << '\n';
    } else {
        int dist1 = b-min_current, dist2 = max_current-b;
        if(dist1 > dist2) {
            dist2*=2;
            cout << dist2 + dist1 << '\n';
        } else {
            dist1*=2;
            cout << dist2 + dist1 << '\n';
        }
    }
    return;

}
int main() {
    cases {
        solve();
    }

    return 0;
}