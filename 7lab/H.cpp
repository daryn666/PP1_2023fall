#include <iostream>
using namespace std;
int res(int n){
    if(n<=1) return n;
    return res(n-1) + res(n-2);
}
int main(){
    int n; 
    cin>>n;
    cout<<res(n-1);
}