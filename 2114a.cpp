#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a = stoi(s);
        int m = sqrt(a);
        if (m * m == a) {
            cout << 0 << " " << m << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}