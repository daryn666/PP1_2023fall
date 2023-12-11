#include <iostream>
using namespace std;
int main(){
    string s, s2; char c;
    cin>>s>>s2>>c;
    for(int i=0; i<s2.size(); i++){
        int found = s.find(s2[i]);
        while(found!=string::npos){
            s[found] = c;
            found = s.find(s2[i], found+1);
        }
    }
    cout<<s;
}