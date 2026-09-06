#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,b,d;
    cin>>n>>b>>d;
    int juice=0;
    int ans=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<b){
            juice+=v[i];
            if(juice>=d){
                juice-=d;
                ans++;
            }
        }
    }

    cout<<ans;
}