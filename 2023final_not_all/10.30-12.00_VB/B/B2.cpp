#include <bits/stdc++.h>
using namespace std;
void get_value(vector<vector<int>>&d){
    vector<int>date(3); 
    while(cin>>date[0] && date[0]!=0 && cin>>date[1]>>date[2]) d.push_back(date);
}
bool comp(vector<int>f, vector<int>s){
    return f[2]<s[2] || (f[2]==s[2] && f[1]<s[1]) || (f[2]==s[2] && f[1]==s[1] && f[0]<s[0]);
}
void two(int n){cout<<n/10<<n%10<<" ";}
void four(int n){cout<<string(3-int(log10(n)), '0')<<n<<'\n';}
int main(){
    vector<vector<int>>d;
    get_value(d);
    sort(d.begin(), d.end(), comp);
    for(auto i:d) {
        two(i[0]);
        two(i[1]);
        four(i[2]);
    }
}