#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s; s+='0';
    int d=1, mx=1; char mxc=s[0];
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            d++;
        }
        else if(d>mx){
            mx=d; mxc=s[i];
            d=1;
        }
        else d=1;
    }
    cout<<mxc<<" "<<mx;
}