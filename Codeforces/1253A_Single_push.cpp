#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        
        bool check=true;
        int k1=0,k=0;
        for(int i=0;i<n;i++){
            if(b[i]<a[i]) {
                check=false;
                break;
            }
            else if(b[i]>a[i]){
                k=b[i]-a[i];
                if(k1==0)k1=k;
                else if(k1!=k){
                    check=false;
                    break;
                }
            }
        }
        cout<<(check?"Yes":"No")<<endl;
    }
}