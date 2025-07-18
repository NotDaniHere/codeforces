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
int main() {
    cases {
        int x,y; cin >> x >> y;
        if(x+1 >= y && (x+1-y)%9 == 0) YES;
        else NO;
    }
    return 0;
}