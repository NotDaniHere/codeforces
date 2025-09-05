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
    int a, b; string s; cin >> a >> b >> s;
    int counter = 0;
    for(auto c: s) {
        if (c == '0') {
            counter = 0;
        } else {
            counter++;
        }
        if(counter >= b) {
            NO; return;
        }
    }
    YES;
    int maximal = a, minimal = 1;
    for(int i = 0; i < a; i++) {
        if(s[i] == '0') {
            cout << maximal << ' ';
            maximal--;
        } else {
            cout << minimal << ' ';
            minimal++;
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