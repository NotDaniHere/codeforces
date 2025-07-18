#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;

int main() {
    int _; cin >> _;
    while(_--) {
            int o,t; cin >> o >> t;
            int o1=o;
            o%=2; t%=2;
            if(o || (t && o) || (!o1 && t)) NO;
            else YES;
        
    }

    return 0;
}