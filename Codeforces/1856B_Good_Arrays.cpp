#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int main(){
    int t;cin>>t;
    bool ans=true;
    while(t--){
        int n;cin>>n;
        
        if(n==1)ans=false;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        unordered_set<int> s;

        for(int x:v){
            if(s.find(x)==s.end()){
                s.insert(x);
            }
            else{ ans=false;}
        }
        if(ans==true)cout<<"YES";
    else cout<<"NO";
    }
    
}