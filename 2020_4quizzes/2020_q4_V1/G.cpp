#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y;
    string s;
    cin>>n>>x>>y>>s;
    int u=0, l=0;
    for(int i=0; i<n; i++){
        if(islower(s[i]))l++;
        if(isupper(s[i]))u++;
    }
    cout<<min(u*x, l*y);
}