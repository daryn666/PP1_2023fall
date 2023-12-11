#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mx=1; char res=s[0];
    int i=0;
    while(i<s.size()){
        int d=1;
        while(s[i++]==s[i]) d++;
        if(d>mx){
            mx=d; res = s[i-1];
        }
    }
    cout<<res<<" "<<mx;
}