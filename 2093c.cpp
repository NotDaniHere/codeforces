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
bool isPrime(int a) {
    if(a == 1) return false;
    for(int i = 2; i <= sqrt(a); i++) {
        if(a%i == 0) {return false;}
    }
    return true;
}
void solve() {
    int x,k; cin >> x >> k;
    if((x == 1 && k == 2) || (isPrime(x) && k == 1)) YES;
    else NO;

}
int main() {
    cases {
        solve();
    }
    return 0;
}