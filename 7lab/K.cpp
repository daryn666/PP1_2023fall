#include <iostream>
using namespace std;
int res(string s, int max=-1){
    if(s.empty())return max;
    if(s[0]-'0' > max) max=s[0]-'0';
    return res(s.erase(0, 1), max);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}