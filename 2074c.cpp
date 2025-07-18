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
        int x; cin >> x;
        int ans = -1;
        for(int i = 0; i < 31; i++) {
            for (int j = 0; j < 31; j++) {
                int y = (1 << i) | (1 << j);
                if(y<x && x+y>(x^y) && y+(x^y) > x) {
                    ans = y;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}