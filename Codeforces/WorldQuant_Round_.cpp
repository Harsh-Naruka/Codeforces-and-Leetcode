#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int a=-1,b=-1;
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                k++;
                if(a==-1)a=i;
                b=i;
            }
        }
        
        if(k==1)cout<<0<<endl;
        else if(k==2)cout<<1<<endl;
        else{
            cout<<b-a<<endl;
        }
    }
}