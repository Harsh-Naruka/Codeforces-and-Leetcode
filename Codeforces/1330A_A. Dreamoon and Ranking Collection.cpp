#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ans=1;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==ans){
                ans++;
            }
            else if(v[i]>ans && x>0){
                x--;
                ans++;
                i--;
            }
        }
        while(x>0){
            ans++;
            x--;
        }
        cout<<ans-1<<endl;
    }
}