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
    ll a; cin >> a; vi A(a); ll minScore = LLONG_MAX;
    for(ll i = 0; i < a; i++) cin >> A[i];
    for(ll i = 0; i < a; i++) {
        ll ogpos = i;
        while(i < a-1 && A[i] == A[i+1]) {
            i++;
        }
        minScore = min((a-(i-ogpos)-1)*A[i], minScore);
        
    }
    if(count(A.begin(), A.end(), A[0]) == a) {cout << 0 << endl; return;}
    cout << minScore << '\n'; return;

}
int main() {
    cases {
        solve();
    }

    return 0;
}