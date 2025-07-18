#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ull;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a; cin >> a;
    string s; cin >> s;
    vi A(CHAR_MAX); 
    fill(A.begin(), A.end(), 0);
    for(int i = 0; i < a; i++) {
        A[s[i]]++;
    }
    sort(A.begin(), A.end(), greater<>());
    if(A[0] > 2) YES;
    else if(A[0] == 2 && (s[0] == s[a-1]) && A[0] > A[1]) NO;
    else if(A[0] == 2 && (s[0] == s[a-1]) && A[0] == A[1]) YES;
    else if(A[0] >= 2) YES;
    else if(A[0] < 2) NO;
    return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}