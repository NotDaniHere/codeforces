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
        int a; cin >> a; vi sides(a);
        for(int i = 0; i < a; i++) cin >> sides[i];
        int c,d;
        while(sides.size() > 1) {
            c = sides[sides.size()-1]; d = sides[sides.size()-2];
            sides.pop_back(); sides.pop_back();
            sides.push_back(c+d-1);
        }
        cout << sides[0] << endl;
        
    }

    return 0;
}