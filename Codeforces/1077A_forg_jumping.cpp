#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;

            long long asum=a;
            long long bsum=b;
            if(k%2==0){
                asum*=(k/2);
                bsum*=(k/2);
            }
            else{
                asum*=((k+1)/2);
                bsum*=((k-1)/2);
            }
        cout<<asum-bsum<<'\n';    
    }
}