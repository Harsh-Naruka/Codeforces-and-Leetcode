#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int k;cin>>k;
        vector<int> v(n);
        
        int ans=0;
        int b=n-1;
        int a=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            
            if(v[a]+v[b]==k){
                ans++;
                a++;
                b--;
            }
            else if(v[a]+v[b]>k){
                b--;
            }
            else{
                a++;
            }
        }
        cout<<ans<<'\n';
    }
}