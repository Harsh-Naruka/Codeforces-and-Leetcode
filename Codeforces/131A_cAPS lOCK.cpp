#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin>>s;
    int uc=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i]))uc++;
    }

    if((islower(s[0]) && uc==s.size()-1) || uc==s.size()){
        s[0]=toupper(s[0]);
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    return 0;
}