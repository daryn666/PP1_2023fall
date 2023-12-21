#include <iostream>
using namespace std;
int res(int sum=0){
    int n; cin>>n;
    if(n==0)return sum;
    else return res(sum+n);
}
int main(){
    cout<<res();
}