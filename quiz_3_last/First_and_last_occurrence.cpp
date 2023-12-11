#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    int f = s.find(t);
    if(f!=string::npos){
        cout<<f;
        int f2=f;
        while(1){
            if(s.find(t, f2+1)==string::npos && f2!=f){
                cout<<" "<<f2;
                break;
            }
            else if(s.find(t, f2+1)==string::npos) break;
            else f2 = s.find(t, f2+1);
        }
    }

}