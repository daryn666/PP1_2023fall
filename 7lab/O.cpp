#include <iostream>
using namespace std;
string res(int k, int n, string s=""){
    if(k==0) return s;
    if(k%n<10) return res(k/n, n, char(k%n+48) + s);
    else return res(k/n, n, char(k%n+55) + s);
}
int main(){
    int k, n;
    cin>>k>>n;
    cout<<res(k, n);
}