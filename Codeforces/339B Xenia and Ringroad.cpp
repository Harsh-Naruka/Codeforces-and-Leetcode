#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;

    long long ans=0;
    int cur=1;

    for(int i=0;i<m;i++){
        int a;cin>>a;

        if(a>=cur){
            ans+=(a-cur);
        }
        else{
            ans+=(n-(cur-a));
        }
    }
    cout<<ans<<endl;
}