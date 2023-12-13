#include <iostream>
using namespace std;
 void isTasty(string s){
    int total = 0;
    for(auto ch:s) total += ch;
    if(total <= 300) cout<<"Oh, no!";
    else cout<<"It is tasty!";
}
int main(){
    string s;
    cin>>s;
    isTasty(s);
}