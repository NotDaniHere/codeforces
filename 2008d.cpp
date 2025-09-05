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
    int a; cin >> a;
    vi A(a); for(int i = 0; i < a; i++) cin >> A[i];
    string s; cin >> s;
    
    vi result(a, 0);
    vector<bool> visited(a, false);
    
    for(int i = 0; i < a; i++) {
        if(!visited[i]) {
            vi cycle;
            int current = i;
            
            while(!visited[current]) {
                visited[current] = true;
                cycle.push_back(current);
                current = A[current] - 1;
            }
            int zero_count = 0;
            for(int node : cycle) {
                if(s[node] == '0') {
                    zero_count++;
                }
            }
            for(int node : cycle) {
                result[node] = zero_count;
            }
        }
    }
    
    for(int i = 0; i < a; i++) {
        cout << result[i] << ' ';
    }
    cout << '\n';
}

int main() {
    cases solve();
    return 0;
}