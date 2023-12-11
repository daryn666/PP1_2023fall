#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin>>s;
    int bb;
    for(int i=1;i<s.size();i++){
       bb=(s[i-1]-'0')*10+(s[i]-'0');
       if(floor(sqrt(bb))==sqrt(bb)){
           s.erase(i-1, 2);
           i-=2;
       }
    }

if(s.empty()){
    cout<<"Stack is empty";
}
else{
    reverse(s.begin(), s.end());
    cout<<s;
}
    return 0;
}