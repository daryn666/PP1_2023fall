#include <bits/stdc++.h>
using namespace std;
float res(float n, float m){
    return m/n*100;
}

int main(){
    float n, m;
    cin>>n>>m;
    cout<<res(n,m);
}