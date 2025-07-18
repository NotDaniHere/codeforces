

    #include <bits/stdc++.h>
    using namespace std;
    #define TOM cout<<"Tom\n"
    #define JERRY cout<<"Jerry\n"
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
            int a,b; cin >> a >> b;
            vi boxes(a);
            for(int i = 0; i < a; i++) cin >> boxes[i];
            int maxim = boxes[0], minim = boxes[0], sum=0;
            int maxim_count=0;
            for(auto k : boxes) {
                if(maxim < k) {
                    maxim = k;
                    maxim_count=1;
                } else if(maxim == k) maxim_count++;
                minim = min(k, minim);
                sum+=k;
            }   
            if(maxim-minim > b+1 || (maxim_count>1 && maxim-minim>b)) JERRY;
            else {
                if (sum%2) TOM;
                else JERRY;
            }
     
     
        }
     
        return 0;
    }