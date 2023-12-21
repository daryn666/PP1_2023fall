#include <iostream>
using namespace std;
int res(int n){
    if(n%2!=0) return n;
    else return res(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<((res(n)==1)?"Yes":"No");
}