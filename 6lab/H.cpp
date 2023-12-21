#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int vowel[5] {65, 69, 73, 79, 85};
bool res(string s){
    int len=s.size();
    int l=len/2+len%2;
    bool r=true;
    for(int i=0; i<l; i++){
        if((int(s[i])-48)%2==1 || ((int(s[len-1-i]))-48)%2==1){
            r=false; break;
        }
    }
    return r;
}
int main(){
    string s;
    getline(cin,s);
    cout<<(res(s)?"Valid":"Not valid");
}