#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main(){
    string s;cin>>s;
    int uc=0;
    for(char c:s){
        if(isupper(c))uc++;
    }

    if((islower(s[0]) && uc==s.size()-1) || uc==s.size()){
        for(char &c:s){
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }
    cout<<s;
    return 0;
}