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
    int n,k; cin >> n >> k;
    vi A(n); for(int i = 0; i <  n; i++) cin >> A[i];
    bool u = false; int val=0;
    if(n == 1) {YES; cout << 1 << '\n'; return;}
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i && j+1 < n) j++;
            if(abs(A[i]-A[j])%k == 0) {
                u = true; break;
            }
        }
        if(!u) {YES; cout << i+1 << '\n'; return;}
        u=false;
        
    }
    
    NO; return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}