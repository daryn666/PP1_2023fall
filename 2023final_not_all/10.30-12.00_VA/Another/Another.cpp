#include <bits/stdc++.h>
using namespace std;
bool comp(vector<int>f, vector<int>s){
    // sum by hand:
    // int sum1=0, sum2=0;
    // for(int i=0; i<f.size(); i++) sum1+=f[i];
    // for(int i=0; i<s.size(); i++) sum2+=s[i];
    // return sum1<sum2;
    return accumulate(f.begin(), f.end(), 0) < accumulate(s.begin(), s.end(), 0);
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>d(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>d[i][j];
    }
    sort(d.begin(), d.end(), comp);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<d[i][j]<<" ";
        cout<<"\n";
    }
}