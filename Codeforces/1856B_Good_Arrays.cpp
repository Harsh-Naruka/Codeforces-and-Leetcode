#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }


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