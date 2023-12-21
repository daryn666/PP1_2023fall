#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool res(string s, int n){
    int a = 0;
    for(int i=0; i<s.size(); i++){
        if(int(s[i])>=48 && int(s[i])<=57){
            a++;
            if(a>=n) return 1;
        }
        else a=0;
    }
    return 0;
}
int main(){
    string s; int n;
    cin>>s>>n;
    cout<<(res(s, n)?"Valid":"Not valid");
}