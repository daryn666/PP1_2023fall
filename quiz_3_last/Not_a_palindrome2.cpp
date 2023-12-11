#include <iostream>
using namespace std;
bool check(string s){
    if(s.empty()) return true;
    if(s[0] != s[s.size()-1]) return false;
    return check(s.substr(1, s.size()-2));
}
int main(){
    string s;
    cin>>s;
    if(check(s)){
        int mx = s.size(); bool res=false; int result=0;
        for(int i=mx-1; i>=0; i--){
            for(int j=0; j<=s.size()-i; j++){
                if(!check(s.substr(j, i))){
                    res=true; result=i; break;
                }
            }
            if(res) break;
        }
        cout<<result;
    }
    else cout<<s.size();
}