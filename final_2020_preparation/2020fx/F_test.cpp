#include <bits/stdc++.h>
using namespace std;
bool aaa(string s){return s.find('@') > 0;}
bool bbb(string s){return s.find('.') > s.find('@')+1;}
bool ccc(string s){return s.find('.') < (s.size()-1);}
bool lower_letters(string s){return count_if(s.begin(), s.end(), static_cast<int(*)(int)>(std::islower)) == (s.size()-2);}
int main(){
    string s;
    cin>>s;
    if(!aaa(s) || !bbb(s) || !ccc(s)||!lower_letters(s)) cout<<"No";
    else cout<<"Yes";
}
