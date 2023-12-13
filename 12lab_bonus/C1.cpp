#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int s = 0;
    for(int i=0; i<n; i++){ 
        cin>>arr[i];
        if(i==0) s = arr[i];
        else s ^= arr[i];
    }
    while(s%2==0 && s!=0) s/=2;
    if(s==1) cout<<"YES";
    else cout<<"NO";
}