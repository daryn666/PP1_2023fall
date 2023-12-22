#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"The anagram variants for string "+s+" are:"<<"\n";
    sort(s.begin(), s.end());
    cout<<s+"\n";
    while(next_permutation(s.begin(), s.end())) cout<<s+"\n";
}