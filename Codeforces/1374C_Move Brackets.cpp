#include<bits/stdc++.h>
Using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int ans=0;
        int count=0;

        for(auto &c:s){
            if(c=='(')count++;
            else count--;

            if(a<0){
                ans++;
                count=0;
            }
        }
        cout<<ans<<endl;
    }
}