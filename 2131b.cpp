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
    int a; cin >> a; vi A(a);
    if(a%2 == 0) {
        while(a--) {
            if(a%2) cout << -1 << ' ';
            else {
                if(a == 0) cout << 2;
                else cout << 3 << ' ';
            }
        }

    } else {
        while(a--) {
            if(a%2) cout << 3 << ' ';
            else cout << -1 << ' ';
        }
    }
    cout << '\n';

}
int main() {
    cases {
        solve();
    }

    return 0;
}