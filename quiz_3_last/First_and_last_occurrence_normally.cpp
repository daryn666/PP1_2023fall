#include <iostream>
using namespace std;
int main(){
    string s; 
    char t;
    cin>>s>>t;
    int f = s.find(t), rf = s.rfind(t);
    if(f!=string::npos && rf!=string::npos && rf!=f) cout<<f<<" "<<rf;
    else if(f!=string::npos) cout<<f;
}