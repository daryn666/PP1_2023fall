#include <bits/stdc++.h>
using namespace std;
bool check(queue<string>q, string s){
    while(!q.empty()){
        if(s==q.front()) return true;
        q.pop();
    }
    return false;
}

int main(){
    int n; string s;
    cin>>n;
    queue<string>q;
    for(int i=0; i<n; i++){
        cin>>s;
        if(check(q, s)){
            cout<<"user already exists\n";
        }
        else{
            cout<<"new user added\n";
            q.push(s);
        }
    }

    return 0;
}