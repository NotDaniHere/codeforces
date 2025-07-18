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
        int n,x; cin >> n >> x;
        vi A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A.begin(), A.end(), greater<>());
        int counter = 0, local_counter = 0;
        for(int i = 0; i < n; i++) {
            if(A[i] >= x) counter++;
            else {
                local_counter++;
                if(local_counter * A[i] >= x) {counter++; local_counter=0;}
            }
        }
        cout << counter << '\n';


    }

    return 0;
}