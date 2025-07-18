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
int main() {
    cases {
        int n; cin >> n;
        int a=INT_MAX, b=1;
        for(int i = 0; i < n; i++) {int c; cin >> c; a=min(a, c); b=max(b,c);}
        cout << b-a << '\n';
    }
    return 0;
}