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
    int twos = 0, threes = 0;
    int current_digit_sum = 0;
    for(char c : s) {
        if(c == '2') twos++;
        else if(c=='3') threes++;
        current_digit_sum += int(c-'0');
    }
    current_digit_sum%=9;
    for(int i = 0; i <= twos; i++) {
        for(int j = 0; j <= threes; j++) {
            if(((i*2) + (j*6) + current_digit_sum)%9 == 0) {
                YES;
                return;
            }
        }
    }
    NO; return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}   