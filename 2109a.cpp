#include <bits/stdc++.h>
using namespace std;
#define NO cout<<"NO\n"
#define YES cout<<"YES\n"
#define F first
#define S second
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef set<int> si;

int main() {
    int _; cin >> _;
    while(_--) {
        int a; cin >> a;
        vi A(a);
        ull z_count = 0;
        for(int i = 0; i < a; i++) {cin >> A[i]; if(A[i] == 0) z_count++;}
        if(z_count == 0) YES;
        else if (z_count == a) YES;
        else {
            bool u = false;
            for(int i = 1; i < a; i++) {
                if(A[i-1] == 0 && A[i] == 0) {
                    YES;
                    u=true;
                    break;
                }
            }
            if(!u) NO;
        }
         

        
    }

    return 0;
}