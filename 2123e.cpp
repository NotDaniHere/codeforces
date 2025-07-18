#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long uint;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;
void solve() {
    int a; cin >> a;
    unordered_map<int, int> B;
    set<int> A; for(int i = 0; i < a; i++) {
        int c; cin >> c;
        A.insert(c);
        B[c]++;
    }
    cout << *A.begin()+*A.end()-1;
    cout << '\n';
    cout << *A.begin() + 1;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < A.size(); j++) {

        }
    }
    
    

}
int main() {
    cases {
        solve();
    }

    return 0;
}