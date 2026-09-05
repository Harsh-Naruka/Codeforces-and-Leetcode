#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    string a;
    if(n<3){cout<<s;}
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
        for(int i=n-3;i<n;i++){
            a+=s[i];
        }
        cout<<a;
    }
    return 0;
}