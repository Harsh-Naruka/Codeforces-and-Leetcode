#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;

            long long asum=0;
            long long bsum=0;

        while(k){
            if(k%2==0){
                asum+=a;
            }
            else{
                bsum+=b;
            }
            cout<<asum-bsum<<'\n';
        }
    }
}