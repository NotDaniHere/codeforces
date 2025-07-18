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
        int a; cin >> a;
        if(a%2) {
            cout << 1 << ' ';
            for(int i = a; i > 2; i--) cout << i << ' ';
            if(a > 2) cout << 2 << '\n';
        } else cout << -1 << '\n';
        
        
    }

    return 0;
}