#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int d[n];
    for(int i=0; i<n; i++)cin>>d[i];
    int k; cin>>k;
    int s[n];
    for(int i=0; i<n; i++){
         s[(n+i+k)%n] = d[i]; 
    } 
    for(int i=0; i<n; i++)cout<<s[i]<<" ";
}
