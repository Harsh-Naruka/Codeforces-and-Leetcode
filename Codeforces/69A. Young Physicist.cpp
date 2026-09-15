#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int sum=0,t=n;
    int a[n];
    if(n>0){
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>=0)sum+=a[i];
        else sum-=a[i];
    }n--;
    }
    else{
        if(sum>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}