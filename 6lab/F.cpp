#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool res(string s, int n){
    int len = s.size(), counter=0;
    int len2 = len/2+len%2;
    for(int i=0; i<len2; i++){
        if(int(s[i])>=48 && int(s[i])<=57)counter++;
        if(int(s[len-1-i])>=48 && int(s[len-1-i])<=57 && ((len%2==1)?(i!=len2-1):true))counter++;
        if(counter>=n){
            return true;
        }
    }
    return false;
}
int main(){
    int n; string s;
    cin>>s>>n;
    cout<<((res(s, n))?"YES":"NO");
}