#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>d(n); vector<bool>in(1000000000, false);
    for(int i=0; i<n; i++){cin>>d[i]; in[d[i]]=true;}
    int res=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(in[d[i]^d[j]]){
                res++;
            }
        }
    }
    cout<<res;
}