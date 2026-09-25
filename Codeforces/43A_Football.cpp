#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
   
    map<string,int> mp;
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            mp[s]++;
        }
        string ans;
         int a=0;
        for(auto c:mp){
            if(c.second>a){
                ans=c.first;
                a=c.second;
            }
        }
    cout<<ans<<endl;
}