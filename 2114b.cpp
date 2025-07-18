#include <bits/stdc++.h>
using namespace std;
int main() {
    int _; cin >> _;
    while(_--) {
        string s;
        int a,b; cin >> a >> b >> s;
        int c = count(s.begin(), s.end(), '0');
        int d = a/2 - b;
        if((c-d) % 2 != 0 || c < d || c > d+2*b) cout << "NO\n";
        else cout << "YES\n";
    }


    return 0; 
}