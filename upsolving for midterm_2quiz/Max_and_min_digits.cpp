#include <iostream>
using namespace std;
int main(){
    string s; cin>>s;
    int mx, mn;
    for(int i=0; i<s.size(); i++){
        if(i==0){
            mx=(s[i]-'0'); mn = (s[i]-'0');
        }
        if(mx < (s[i]-'0')) mx=(s[i]-'0');
        if(mn > (s[i]-'0')) mn = (s[i]-'0');
    }
    cout<<mx<<" "<<mn;
}