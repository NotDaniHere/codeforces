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
    int a,b;
    cin >> a >> b;
    if(max(a,b) == 1) cout << "1/1\n";
    else if(max(a,b) == 2) cout << "5/6\n";
    else if(max(a,b) == 3) cout << "2/3\n";
    else if(max(a,b) == 4) cout << "1/2\n";
    else if(max(a,b) == 5) cout << "1/3\n";
    else if(max(a,b) == 6) cout << "1/6\n";
    

}
int main() {
    solve();
    return 0;
}