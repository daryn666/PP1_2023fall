#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    queue<string>q;
    while(t--){
        int k;
        cin>>k;
        if(k==1){
            string f;
            cin>>f;
            q.push(f);
        }
        else q.pop();
        if(q.empty()) cout<<"queue is empty\n";
        else cout<<q.front()<<"\n";
    }
}