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
        string s; cin >> s;
        int z = count(s.begin(), s.end(), '0');
        float d = sqrt(a);
        if(pow(d-2, 2) == z) YES;
        else NO;

    }

    return 0;
}