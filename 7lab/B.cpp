#include <iostream>
using namespace std;
void res(int n){
    if(!n) return;
    res(n/2);
    cout<<n%2;
}
int main(){
    int n; 
    cin>>n;
    res(n);
}