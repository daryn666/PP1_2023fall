#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int k = s.find(t);
    while(k!=string::npos){
        cout<<k<<" ";
        k = s.find(t, k+1);
    }
}