#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int equals(int a[], int b[], int n){
    int c=0;
    int equal[101];
    for(int i=0; i<101; i++) equal[i]=0; 
    for(int i=0; i<n; i++){
        equal[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(equal[b[i]] +1 >=2){
            equal[b[i]]--; c++;
        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    cout<<equals(a, b, n);
}