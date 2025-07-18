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
        int n;
    cin >> n;
    string s;
    cin >> s;

    int l = 1;
    int r = n;
    vector<int> a(n);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            a[i + 1] = l;
            l++;
        }
        if (s[i] == '>') {
            a[i + 1] = r;
            r--;
        }
    }
    a[0] = l;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
    }

    return 0;
}