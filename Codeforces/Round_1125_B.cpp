#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int c_document=0;
        string ans(n);
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c_document++;
                ans.push(c_document);
            }
            else if(s[i]=='2')ans.pop();
            else{
                ans.pop();
                break;
            }
            
        }
        return ans;
    }
}