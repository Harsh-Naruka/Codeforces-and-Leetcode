#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int balance=0;
        int n;
        string s;
        cin>>n>>s;
        bool check=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='(')balance++;
            else balance--;

            if(balance==0)check=true;
        }
        cout<<(check?"YES\n":"NO\n");
    }
}