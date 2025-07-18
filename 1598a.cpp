#include <bits/stdc++.h>
using namespace std;
int main() {
    int _; cin >> _;
    while(_--) {
        int a; cin >> a;
        string b,c; cin >> b >> c;
        bool u = true;
        for(int i = 0; i < a; i++) {
            if(b[i] == '1' && c[i] == '1') {
                u = false;
                break;
            }
        }
        if(u) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}