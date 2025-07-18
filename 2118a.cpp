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
    int size, count; cin >> size >> count;
    int z_count = size-count;
    for(int i = 0; i < count; i++) cout << 1;
    for(int i = 0; i < z_count; i++) cout << 0;
    return;

}
int main() {
    cases {
        solve();
        cout << '\n';
    }

    return 0;
}