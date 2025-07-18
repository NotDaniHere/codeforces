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
    int n; cin >> n;
    vi A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    cout << 1;
    int minim = A[0];
    for (int i = 1; i < n-1; i++) {
        if(minim > A[i]) {
            cout << 1;
            minim = A[i];
        } else {
            bool u = true;
            for(int j = n-1; j > i-1; j--) {
                if(A[j] > A[i]) {
                    cout << 0;
                    u = false;
                    break;
                }
                

            } 
            if(u) cout << 1;
        }
    }

    cout << 1 << '\n';
}
int main() {
    cases {
        solve();
    }

    return 0;
}