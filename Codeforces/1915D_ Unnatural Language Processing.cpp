#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;cin>>t;
    
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string a;
        int c=n;
        for(int i=0;i<n;i++){
            if(c%2==0 && c%3!=0){
                a[i]+=s[i];
                a[i+1]+=s[i+1]+'.';
                i++;
                c-=2;
            }
            else{
               a[i]+=s[i];
                a[i+1]+=s[i+1];
                a[i+2]+=s[i+2]+'.';
                i+=2;
                c-=3; 
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        cout<<'\n';
    }
}