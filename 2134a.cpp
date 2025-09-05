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
    if(c%2 != a%2) {NO; return;}
    if(c%2 == a%2 && b > c && b%2 != c%2) {NO; return;}
    YES;


}
int main() {
    cases {
        solve();
    }

    return 0;
}