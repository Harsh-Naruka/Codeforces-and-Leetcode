#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    string a;
    if(n<3){return s;}
    else{
        while(n>2){
            if(n%2==0){
                a+=s[(n/2)-1];
            }
            else {
                a+=s[((n+1)/2)-1];
            }
            n--;
        }
    }
}