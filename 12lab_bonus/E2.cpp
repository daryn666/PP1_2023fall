#include <iostream>
using namespace std;
string f(long long a, string s=""){
    if(a==0)return s;
    if(a%16<10) return f(a/16, char(a%16+48)+s);
    else return f(a/16, char(a%16+55)+s);
}
int main(){
    long long x;
    cin>>x;
    cout<<f(x);
}