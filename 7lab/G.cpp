#include <iostream>
using namespace std;
int res(int n){
    if(n==0) return 1;
    return n*res(n-1);
}
int main(){
    int n; 
    cin>>n;
    cout<<res(n);
}