#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<ceil((double)(n-1)/(k-1))<<'\n';
    }
}