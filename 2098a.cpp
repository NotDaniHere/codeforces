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
        string s = ""; int A[10]; memset(A, 0, sizeof(A));  
        for(int i = 0; i < 10; i++) {
            char c; cin >> c;
            A[int(c-'0')]++;
            s+=c;
        }
        for(int i = 0; i < 10; i++) {
            for(int j = 9-i; j <= 9; j++) {
                if(A[j] > 0) {A[j]--; cout << j; break;}
            }
        }
        cout << '\n';

    }

    return 0;
}