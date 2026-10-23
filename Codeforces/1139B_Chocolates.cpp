#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    long long prev=a[n-1] , sum=prev;
    for(int i=n-2; i>=0 ;i--){
        long long cur = min(a[i],prev-1);
        if(cur<=0) break;
        sum +=cur;
        prev = cur;
    }
    cout<<sum;
}