#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        long long ans = 0;
        while(true){
            int M = *max_element(v.begin(), v.end());
            if(M==0) break;
            int h = 31 - __builtin_clz(M);
            int mn = *min_element(v.begin(), v.end());
            if(mn < (1<<h)){
                ans += (1LL<<(h+1)) - 1;
                break;
            }
            ans += (1LL<<h);
            for(int &x : v) x -= (1<<h);
        }
        cout<<ans<<endl;
    }
}