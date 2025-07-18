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
        int a; cin >> a;
        cout << 1 << ' ';
        for(int i = 3; i <= a; i++) cout << i << ' ';
        cout << 2 << '\n';
    }

    return 0;
}