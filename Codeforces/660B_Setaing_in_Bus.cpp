#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int it=0;
    if(m%2!=0){
        it=((m+1)/2)+1;
    }
    else{
        it=(m/2)+1;
    }
    int a=1;
    vector<int> v1(m);
    for(int i=0;i<m;i++){
        if(i%2==0){
            v1[i]=v1[i]+it;
            it++;
        }
        else{
            v1[i]=v1[i]+a;
            a++;
        }
    }

    for(int i=0;i<it;i++){
        cout<<v1[i]<<" ";
    }

}