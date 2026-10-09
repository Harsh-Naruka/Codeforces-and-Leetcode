#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[n-1]>m)cout<<v[n-1]<<endl;
    else cout<<n<<endl;
}