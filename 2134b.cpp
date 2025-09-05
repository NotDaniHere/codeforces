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
    int a,b; cin >> a >> b;
    vi A(a); for(int i = 0; i < a; i++) cin >> A[i];
    vi B(a); for (int i = 0; i < a; i++) B[i] = A[i]%b;
    for(int i = 0; i < a; i++) cout << B[i]*b + A[i] << ' ';
    cout << '\n';
    


}
int main() {
    cases {
        solve();
    }

    return 0;
}