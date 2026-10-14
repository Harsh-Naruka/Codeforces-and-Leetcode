#include<bits/stdc++.h>
using namespacestd

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,r;cin>>a>>b>>r;
        int ans1=0 , ans2=r-1;
        int ans=0;
        for(int i=-10 ; i<=10 || ans!=r*r ;i++){
            ans1=a-i;
            ans=(ans1*ans1)+(b-ans2);
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}