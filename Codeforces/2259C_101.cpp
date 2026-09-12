#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long v[n];
        for(long long i=0;i<n;i++){
            if(v[i]==-1)v[i]=1;
            break;
        }
        for(long long i=n-1;i>=0;i--){
            if(v[i]==-1)v[i]=1;
            break;
        }
        for(long long i=0;i<n-1;i++){
            if(v[i]==-1)v[i]=0;
        }
        for(long long i=0;i<n-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}