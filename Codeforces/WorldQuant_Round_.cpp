#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;cin>>t;
    // while(t--){
    //     int n;cin>>n;
    //     string s;cin>>s;
    //     int a=-1,b=-1;
    //     int k=0;
    //     for(int i=0;i<n;i++){
    //         if(s[i]=='1'){
    //             k++;
    //             if(a==-1)a=i;
    //             b=i;
    //         }
    //     }
        
    //     if(k==1)cout<<0<<endl;
    //     else if(k==2)cout<<1<<endl;
    //     else{
    //         cout<<b-a<<endl;
    //     }
    // }

    int t;cin>>t;
    while(t--){
        int n;
        vector<int> v[n];
        if(n==1)cout<<0<<endl;
        else{
            for(int i=1;i<n;i++){
                cin>>v[i];
            }
            for(int i=1;i<n;i++){
                if(v[i-1]<v[i]){
                    v[i-1]++;
                    cout<< v[i-1] | v[i] <<endl;
                    break;
                }
                else if(v[i-1]>v[i]){
                    v[i]++;
                    cout<< v[i-1] | v[i] <<endl;
                    break;
                }
                else{
                    cout<<v[i]<<endl;
                    break;
                }
            }
        }
    }
}