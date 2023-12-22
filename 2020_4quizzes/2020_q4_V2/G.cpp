#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n; 
    int d[n]; 
    for(int i=0; i<n; i++) cin>>d[i];
    cin>>m;
    int v[m];
    for(int i=0; i<m; i++) cin>>v[i];
    int res[n+m], id=0, i=0, j=0;
    while(id<n+m){
        while(i<n && d[i]<=v[j]) res[id++] = d[i++];
        while(j<m && v[j]<=d[i]) res[id++] = v[j++];
        if(i==n) while(j<m) res[id++] = v[j++];
        else if(j==m) while(i<n) res[id++] = d[i++];
    }
    for(int i=0; i<n+m; i++){
        cout<<res[i]<<" ";
    }
}

// int main(){
//     int n, m=0, x;
//     cin>>n;
//     vector<int>d;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         d.push_back(x);
//         if(i==n-1 && !m){
//             cin>>m; n=m; i=-1;
//         }
//     }
//     sort(d.begin(), d.end());
//     for(int i:d) cout<<i<<" ";
// }



// int main(){
//     int n;
//     cin>>n;
//     int d[n];
//     for(int i=0; i<n; i++) cin>>d[i];
//     int m;
//     cin>>m;
//     int t[m];
//     for(int i=0; i<m; i++) cin>>t[i];
//     int res[n+m];
//     merge(d, d+n, t, t+m, res);
//     for(int i=0; i<n+m; i++) cout<<res[i]<<" ";
// }