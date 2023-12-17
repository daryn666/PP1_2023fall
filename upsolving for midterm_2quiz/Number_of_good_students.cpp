#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    int t, res=0; cin>>t;
    for(int i=0; i<n; i++){
        // if(a[i]<=b[i] && t>=a[i] && t<=b[i]) res++;
        if(t>=a[i] && t<=b[i]) res++;
    }
    cout<<res;
}