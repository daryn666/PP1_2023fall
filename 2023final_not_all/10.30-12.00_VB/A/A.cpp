#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string>q;
    int n;
    string s;
    while(cin>>n){
        if(n==1){
            cin>>s;
            q.push(s);
        }
        else{
            cout<<q.front()<<"\n";
            q.pop();
        }
    }
}