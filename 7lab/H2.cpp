#include <iostream>
using namespace std;
int res( int n, int frst=0, int scnd=1){
    if(n==0) return frst;
    else return res(n-1, scnd, frst+scnd);
}
int main(){
    int n; 
    cin>>n;
    cout<<res(n-1);
}