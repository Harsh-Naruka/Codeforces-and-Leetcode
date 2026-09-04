#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    int total=0,odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
        if(v[i]%2==0)even++;
        else odd++;
    }
    if(total%2==0){
        cout<<even;
    }
    else {
        cout<<odd;
    }
}