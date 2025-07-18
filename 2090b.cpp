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
void solve() {
    int a,b; cin >> a >> b;
    char C[a+1][b+1]; memset(C, '1', sizeof(C));
    for(int i = 1; i < a+1; i++) {
        for(int j = 1; j < b+1; j++) {
            cin >> C[i][j];
        }
    }
    for(int i = 1; i < a+1; i++) {
        for(int j = 1; j < b+1; j++) {
            if(C[i][j] == '1') {
                if(C[i-1][j] == '0' && C[i][j-1] == '0') {NO; return;}
            }
        }
    }
    YES;

}
int main() {
    cases {
        solve();
    }

    return 0;
}