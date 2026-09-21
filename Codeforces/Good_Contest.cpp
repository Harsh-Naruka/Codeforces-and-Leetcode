#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a,b,c;cin>>a>>b>>c;
        int l=a;
        l=min({a,b,c});
        cout<<n-l<<endl;
    }
}