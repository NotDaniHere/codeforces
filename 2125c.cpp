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

bool good(ull x) {
    return x % 2 > 0 && x % 3 > 0 && x % 5 > 0 && x % 7 > 0;
}

ull get_naive(ull x) {
    ull counter = 0;
    for (ull i = 1; i <= x; i++) {
        if (good(i)) counter++;
    }
    return counter;
}

const ull cycle = 210;
const ull countInCycle = get_naive(cycle);

ull get(ull a) {
    if (a == 0) return 0;
    ull fullCycles = a / cycle;
    ull remainder = a % cycle;
    return fullCycles * countInCycle + get_naive(remainder);
}

void solve() {
    ull a, b;
    cin >> a >> b;
    cout << get(b) - get(a-1) << '\n';
}

int main() {
    cases {
        solve();
    }
    return 0;
}