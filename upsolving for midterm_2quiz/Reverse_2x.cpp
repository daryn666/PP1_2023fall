#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string n; cin>>n;
    while(n[n.size()-1] == '0'){
        n = n.substr(0, n.size()-1);
    }
    string a="";
    for(int i=n.size()-1; i>=0; i--) a+=n[i];
    int b = stoi(a);
    cout<<2*b;
}