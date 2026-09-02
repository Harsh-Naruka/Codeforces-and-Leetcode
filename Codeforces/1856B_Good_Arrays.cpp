#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        int sum=0;
        int ones=0;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(1==v[i])ones++;
        }

        
        
    }
    
}