#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int vowel[5] {65, 69, 73, 79, 85};
string res(string s){
    int len=s.size();
    for(int i=0; i<len; i++){
        bool cont1=false, cont2=false;
        for(int j=0; j<5; j++){
            if((int(s[i]) == vowel[j] || int(s[i]) == (vowel[j]+32)) && !cont1){
                s = s.substr(0, i) + s.substr(i+1, len-1-i);
                len--;
                i--;
                break;
            }
        }
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    cout<<res(s);
}