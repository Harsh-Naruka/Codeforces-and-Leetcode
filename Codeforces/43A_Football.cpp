#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a=0;
    map<string,int> mp;
        string s(n);
        for(int i=0;i<n;i++){
            cin>>s;
            mp[s]++;
        }
        string ans;
        for(auto c:mp){
            if(c.second>a){
                ans=c.first;
                a=c.second;
            }
        }
    cout<<ans<<endl;
}