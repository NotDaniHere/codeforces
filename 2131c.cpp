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
    map<int, int> hm; vi A(a);
    for(int i = 0; i < a; i++) {int c; cin >> c; hm[c%b]++;}
    for(int i = 0; i < a; i++) cin >> A[i];
    for(int i = 0; i < a; i++) {
        int c = A[i];
        int d = c%b, e = abs(d-b);
        if(hm[d] > 0) hm[d]--; 
        else if (hm[e] > 0) hm[e]--;
        else {NO; return;}
    }   
    YES;

}
int main() {
    cases {
        solve();
    }

    return 0;
}