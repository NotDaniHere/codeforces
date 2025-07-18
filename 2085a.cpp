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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    bool moreThanTwo = false; int i = 0;
    while(s[i] == s[i+1] && i < n-1) i++;
    if(reversed == s && i == n-1) {NO; return;}
    else if(i!=n-1 && (k > 0 || reversed > s)) {YES; return;}
    NO;
    return;

}
int main() {
    cases {
        solve();
    }

    return 0;
}