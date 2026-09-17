#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin>>n;
    bool check=false;
    
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' || s[i]=='7'){
            check=true;
        }
        else if(n%4==0 || n%7==0) {check=true;}
        else {check =false;
        break;}
    }
    cout<<(check?"YES":"NO")<<endl;
}