#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,c;cin>>a>>b>>c;
        long long ans=max( min(|a-b|, |a-b-c|), |a+c-b| );
        cout<<ans<<endl;
    }
}