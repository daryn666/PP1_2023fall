#include <iostream>
using namespace std;
string res(long long n, string s=""){
    if(n==0)return s;
    if(n%16<10) return res(n/16, char(n%16+48)+s);
    else return res(n/16, char(n%16+55)+s);
}
int main(){
    long long n;
    cin>>n;
    cout<<res(n);
}