#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, tp;
    cin>>n>>k;
    queue<int>q;
    for(int i=0; i<n; i++){
        cin>>tp;
        q.push(tp);
    }
    // sortQueue(q);
    int res=0;
    for(int i=0; i<n; i++){
        tp=q.front();
        q.pop();
        if(tp==k)res++;
    }
    cout<<res;
    return 0;
}