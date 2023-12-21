#include <iostream>
using namespace std;
int res(string s, int sum=0){
    if(s.empty()) return sum;
    else return res(s.substr(1, s.size()-1), sum+s[0]-48);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}