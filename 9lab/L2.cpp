#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tp1, tp2;
    cin>>n;
    vector<int>d(n);
    for(int i=0; i<n; i++){
        cin>>tp1>>tp2;
        d[i]=tp1+tp2;
    }
    vector<int>copy = d; 
    sort(d.begin(), d.end());
    for(int i=0; i<n; i++){
        int mn=d[i];
        for(int j=0; j<n; j++){
            if(mn==copy[j]){
                cout<<j+1<<" ";
                copy[j]=1111111111;
                break;
            }
        }
    }
}