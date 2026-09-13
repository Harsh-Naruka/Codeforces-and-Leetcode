#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin>>s;
    string a;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' || s[i]!='e' || s[i]!='i'
        || s[i]!='o' || s[i]!='u' || s[i]!='y'){
            a[i]+='.';
            a[i]=s[i];
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
}