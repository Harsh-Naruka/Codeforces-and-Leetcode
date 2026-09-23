#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,c;cin>>a>>b>>c;
        long long ans=max( min(abs(a-b), abs(a-b-c)), abs(a+c-b) );
        cout<<ans<<endl;
    }
}