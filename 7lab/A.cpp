#include <iostream>
#include <algorithm>
using namespace std;
int res(int n, int d=1){
    if(!n) return d;
    return res(n-1, d*2);
}
int main(){
    int n; 
    cin>>n;
    cout<<res(n);
}