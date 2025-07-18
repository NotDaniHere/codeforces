#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long int;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a; cin >> a; vi A(a);
    int sum_pair = 0, sum_unpair = 0;
    for(int i = 0; i < a; i++) {
        int c; cin >> c;
        if(i%2) sum_unpair+=c;
        else sum_pair+=c;
    }
    if(a%2) {
        a/=2;
        if(sum_pair / (a+1) == sum_unpair / a && sum_pair%(a+1) == 0 && sum_unpair%a == 0) YES;
        else NO;
    } else {
        a/=2;
        if(sum_pair/a == sum_unpair/a && sum_pair%a == 0 && sum_unpair%a == 0) YES;
        else NO;
    }
    return;
    
}
int main() {
    cases {
        solve();
    }

    return 0;
}