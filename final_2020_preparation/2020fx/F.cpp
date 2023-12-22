#include <bits/stdc++.h>
using namespace std;
bool exist(string s){
    if(count(s.begin(), s.end(), '@')==1 && count(s.begin(), s.end(), '.')==1) return true;
    return false;
}
bool order(string s){
    if(s.find('@') < s.find('.')) return true;
    return false;
}
bool aaa(string s){return s.find('@') > 0;}
bool bbb(string s){return s.find('.') > s.find('@')+1;}
bool ccc(string s){return s.find('.') < (s.size()-1);}
bool lower_letters(string s){
    return count_if(s.begin(), s.end(), static_cast<int(*)(int)>(std::islower)) == (s.size()-2);
}
int main(){
    string s;
    cin>>s;
    if(!exist(s) || !order(s)) cout<<"No";
    else if(!aaa(s) || !bbb(s) || !ccc(s)) cout<<"No";
    else if(!lower_letters(s)) cout<<"No";
    else cout<<"Yes";
}
