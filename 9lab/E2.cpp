#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; string tp;
    cin>>n;
    queue<string>q;
    for(int i=0; i<n; i++){
        cin>>tp;
        q.push(tp);
    }
    // sortQueue(q);
    int res=0;
    while(!q.empty()){
        tp=q.front();
        q.pop();
        int mes=1;
        queue<string>copy;
        while(!q.empty()){
            if(tp==q.front())mes++;
            else copy.push(q.front());
            q.pop();
        }
        q=copy;
        if(mes==3){res++;}
    }
    cout<<res;
    return 0;
}