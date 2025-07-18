#include <bits/stdc++.h>
using namespace std;
int main() {
    int _; cin >> _;
    while(_--) {
        int a,b,c,d; cin >> a >> b >> c >> d;
        int x,z; x = min(a,c); z = min(b,d);
        if(x>=z) cout << "Gellyfish\n";
        else cout << "Flower\n";
        
    }
}