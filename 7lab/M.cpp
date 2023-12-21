#include <iostream>
#include <algorithm>
using namespace std;
void res(int n){
    if(n==0) return;
    res(n-1);
    cout<<n<<" ";
}
int main(){
    int n; 
    cin>>n;
    res(n);
}