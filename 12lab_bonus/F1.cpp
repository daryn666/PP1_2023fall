#include <iostream>
using namespace std;
bool isTasty(string s, int sum=0){
    if(s.empty() && sum>300) return true;
    else if(s.empty()) return false;
    return isTasty(s.substr(1, s.size()-1), sum+s[0]);
}
int main(){
    string s;
    cin>>s;
    cout<<(isTasty(s)?"It is tasty!":"Oh, no!");
}