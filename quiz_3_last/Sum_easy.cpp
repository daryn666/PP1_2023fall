#include <iostream>
using namespace std;
int res(string s, int sum=0){
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i])) sum += s[i] - '0';
    }
    return sum;
}
int main(){
    string s;
    cin>>s;
    cout<<res(s);   
}