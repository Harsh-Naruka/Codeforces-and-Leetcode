#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin>>s;
    if(islower(s[0]) || (isupper(s[0]) && islower(s[1]))){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }}
    else{
        s[0]=tolower(s[0]);
    for(int i=1;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
    }
    cout<<s;
    return 0;
}