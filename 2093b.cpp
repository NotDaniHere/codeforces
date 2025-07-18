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
    string s; cin >> s;
    pi chosenOne = {INT_MAX, INT_MAX}; int a = s.size();
    for(int i = a-1; i >= 0; i--) {
        if(s[i]!='0') {chosenOne.first = s[i]; chosenOne.second = i; break;}
    }
    int deletes = a-1;
    for(int i = chosenOne.second; i >= 0; i--) {
        if(s[i] == '0') deletes--;
    }
    cout << deletes << '\n';

}
int main() {
    cases {
        solve();
    }

    return 0;
}