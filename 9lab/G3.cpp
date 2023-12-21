#include <iostream>
#include <queue>
#include <stack>
using namespace std;
string order(string n){
    stack<char>s;
    for(auto i:n){
        if(!s.empty() && (s.top()!='1' || i!='1'))s.push(i);
        else if(!s.empty())s.pop();
        else if(s.empty()) s.push(i);
    }
    string res="";
    while(!s.empty()){
        res = s.top()+res;
        s.pop();
    }
    return res;
}

int main(){
    string n;
    cin>>n;
    cout<<order(n);
}