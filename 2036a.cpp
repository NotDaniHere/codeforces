#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
#define readArray for(int i = 0; i < a; i++) cin >> A[i]
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a; cin >> a;
    vi A(a); readArray;
    int last_number = A[0];
    int i; bool u = false;
    for(i = 1; i < a; i++) {
        if(abs(A[i-1]-A[i]) == 5 || abs(A[i]-A[i-1]) == 7) {u=true;}
        else {u = false; break;}
    }
    if(u) YES;
    else NO;
}
int main() {
    cases {
        solve();
    }

    return 0;
}