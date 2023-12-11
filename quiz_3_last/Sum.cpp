#include <iostream>
using namespace std;
int res(string s, int sum=0){
    if(s.empty())return sum;
    if(isdigit(s[0])) sum+=s[0]-48; 
    return res(s.erase(0, 1), sum);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);   
}