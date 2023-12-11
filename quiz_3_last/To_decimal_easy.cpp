#include <iostream>
using namespace std;
int power(int i){
    return 1 << i;
}
int res(string s, int rs=0){
    for(int i=0; i<s.size(); i++){
        if(s[s.size()-1-i] == '1') rs+=power(i);
    }
    return rs;
}
int main(){
    string s;
    cin>>s;
    cout << res(s);
}