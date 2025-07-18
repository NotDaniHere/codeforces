#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
#define cases int _; cin >> _; while(_--)
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ull> vi;
typedef pair<ull, ull> pi;
typedef set<int> si;
void solve() {
    int a; cin >> a; vector<pi> A;
    vi Sums; ull local_sum = 0;
    for(int i = 0; i < a; i++) {
        int c; cin >> c; A.push_back({c,i});
    }
    for(int i = a-1; i >= 0; i--) {
        int c = A[i].first; local_sum += c;
        Sums.push_back(local_sum);
    }
    sort(A.begin(), A.end(), greater<>());
    
    ull max_counter = 0;
    cout << A[0].first << ' ';
    for(int i = 1; i < a; i++) {
        while(A[max_counter].second >= a-i && max_counter < a) max_counter++;
        cout << A[max_counter].first + Sums[i-1]  << ' ';
    }
    
    cout << '\n'; return;
}
int main() {
    cases {
        solve();
    }

    return 0;
}