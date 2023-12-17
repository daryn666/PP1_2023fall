#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int f = t.find(s[0]);
    bool res;
    while(f!=string::npos){
        int id=0;
        res=true;
        for(int i=f; i<t.size(); i++){
            if(s[id++]!=t[i]){
                res=false;
                break;
            }
        }
        if(res){
            for(int i=0; i<f; i++){
                if(s[id++]!=t[i]){
                    res=false;
                    break;
                }
            }
        }
        if(res){
            cout<<f;
            return 0;
        }
        f = t.find(s[0], f+1);
    }
    cout<<"Understandable have a nice day";
}