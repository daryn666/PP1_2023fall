#include <iostream>
using namespace std;
int power2(int i, int rs=1){
    if(i==0) return rs;
    return power2(i-1, rs*2);
}
int res(string s, int i=0, int rs=0){
    if(s.empty()) return rs;
    if(s[s.size()-1]=='1') rs+=power2(i);
    return res(s.erase(s.size()-1, 1), i+1, rs);
}
int main(){
    string s;
    cin>>s;
    cout << res(s);
}