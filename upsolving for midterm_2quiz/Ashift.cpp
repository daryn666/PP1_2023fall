#include <iostream>
using namespace std;
int main(){
    int n, tp; cin>>n; int d[n];
    for(int i=0; i<n; i++){
        cin>>d[i];
    }
    int k; cin>>k;
    if(k==0) for(int i=0; i<n; i++)cout<<d[i]<<" ";
    else if(k>0){
        int s[n];
        for(int i=0; i<n; i++){
            s[(i+k)%n] = d[i]; 
        }
        for(int i=0; i<n; i++)cout<<s[i]<<" ";
    }
    else{
        int s[n];
        for(int i=0; i<n; i++){
            if(i<(-1*k)) s[n+k+i] = d[i];
            else s[(i+k)%n] = d[i]; 
        } for(int i=0; i<n; i++)cout<<s[i]<<" ";
    }
}