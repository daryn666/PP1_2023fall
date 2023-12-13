#include <iostream>
#include <algorithm>
using namespace std;
void func(string st){
    if(st.empty()) return;
    func(st.substr(1, st.size()-1));
    cout<<st[0];
}
int main(){
    string n; 
    cin>>n;
    func(n);
}