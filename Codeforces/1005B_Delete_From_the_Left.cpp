#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    string s;cin>>s;
    string t;cin>>t;

    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());

    int ss=s.size();
    int st=t.size();

    int n=max(ss,st);

    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==t[i])ans++;
    }
    if(ans==0)cout<<ss+st;
    else cout<<ss+st-ans;
}