#include <iostream>
#include <queue>
using namespace std;
bool isbraket(string n){
    queue<char>q;
    for(auto i:n){
        if(i=='('){
            q.push('(');
        }
        else if(i==')' and !q.empty()){
            q.pop();
        }
        else if(i==')' and q.empty()){
            return false;
        }
    }
    return q.empty();
}

int main(){
    string n;
    cin>>n;
    cout<<(isbraket(n)?"YES":"NO");
}