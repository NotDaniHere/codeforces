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
        int n, x; cin >> n >> x;
        string A; for(int i = 0; i < n; i++) {char c; cin >> c; A=A+c;}
        int i = A.find('1'), j = A.rfind('1');
        if(j-i >= x) NO;
        else YES;
        
        

        
    }

    return 0;
}