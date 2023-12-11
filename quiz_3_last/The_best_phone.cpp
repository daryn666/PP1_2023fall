#include <iostream>
using namespace std;
double res(double x, double y){
    return y/x;
}
int main(){
    int n; cin>>n;
    string r; double mx=0;
    while(n--){
        string s; double x1, x2; 
        cin>>s>>x1>>x2;
        if(mx<res(x1, x2)){
            r=s;
            mx=res(x1, x2);
        }
    }
    cout<<r;
}