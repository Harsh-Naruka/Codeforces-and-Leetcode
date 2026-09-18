#include<iostream>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    int s1=a+(b*c);
    int s2=(a*b)+c;
    int s3=(a*c)+b;
    if(s1>s2 && s1>s3){
        cout<<s1; 
    }
    else if(s2>s1 && s2>s3){cout<<s2;}
    else{ cout<<s3;}
    return 0;
}