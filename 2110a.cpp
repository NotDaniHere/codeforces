#include <bits/stdc++.h>
using namespace std;
int main() {
    int _; cin >> _;
    while(_--) {
        int a; cin >> a; vector<int> A(a);
        for(int i = 0; i < a; i++) cin >> A[i];
        sort(A.begin(), A.end());
        int counter = 0; int i = 0;
        for(i = 0; i < a; i++) {
            if(A[i]%2 == A[a-1]%2 || A[0]%2 == A[a-1-i]%2) {
                break;
            }
        }  
        cout << i << endl;
    }

}