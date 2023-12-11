#include <iostream>
using namespace std;
string res(long long n, string s=""){
    char ch[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while(n){
        s=ch[n%16]+s;
        n/=16;
    }
    return s;
} 
int main(){
    long long n;
    cin>>n;
    cout<<res(n);
}