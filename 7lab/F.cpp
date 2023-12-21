#include <iostream>
using namespace std;
int res(string s, int c=0){
    if(s.empty()) return c;
    else if(s[0]%2==0) c++;
    return res(s.erase(0, 1), c);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);
}