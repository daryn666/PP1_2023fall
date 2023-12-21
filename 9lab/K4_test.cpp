#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[n];
    for(int i=0; i<n; i++) cin>>d[i];
    stack<int>pos, h;
    int mx=0;
    for(int i=0; i<n; i++){
        if(h.empty() || d[i]>h.top()){
            h.push(d[i]);
            pos.push(i);
        }
        else{
            int temp_pos = i;
            while(!h.empty() && d[i]<h.top()){
                mx = max(mx, h.top()*(i-pos.top()));
                temp_pos = pos.top();
                pos.pop();
                h.pop();
            }
            if(h.empty() || d[i]>h.top()){
                h.push(d[i]);
                pos.push(temp_pos);
            }
            // maybe h.push(d[i]); pos.push(temp_pos);  rather than if
        }
    }
    while(!h.empty()){
        mx = max(mx, h.top()*(n-pos.top()));
        h.pop();
        pos.pop();
    }
    cout<<mx;
}