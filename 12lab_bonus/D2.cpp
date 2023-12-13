#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int x, int y){
    if(x*y==0) return x+y;
    return gcd(y%x, x);
}
int main(){
    int n, mx=-1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(mx<arr[i]){
            for(int j=0; j<i; j++){
                mx = max(mx, gcd(arr[j], arr[i]));
            }
        }
    }
    cout<<mx;
}