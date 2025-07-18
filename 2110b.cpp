#include <bits/stdc++.h>
using namespace std;
int main() {    
    int _; cin >> _;
    while(_--) {
        string s; cin >> s;
        if(s.find(")(") > s.size()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}