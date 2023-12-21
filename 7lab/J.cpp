#include <iostream>
using namespace std;
int res(int n, int sum=0){
    if(!n)return sum;
    return res(n/10, sum+(n%10)/2);
}
int main(){
    int n;
    cin>>n;
    cout<<res(n);
}