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
    int n,m,a,b; cin >> n >> m >> a >> b;
    int moves = 0;
    while(m > 1 || n > 1) {
        int max_dist = max(a, b);
        if(max_dist == a) {
            n = a;
        } else {
            m = b;
        }
        //zaebal nahui
        a = max(1, n/2);
        b = max(1, m/2);
        cout << n << ' ' << m << ' ' << a << ' ' << b;
        cout << '\n';
         
        moves++;
    }
    cout << moves << '\n';
    return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}