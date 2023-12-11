#include <bits/stdc++.h>
using namespace std;
int tp1, tp2, tp3;
#define pb push_back
void print(string s){
    stringstream ss(s);
    string s1, s2; int a, b;
    ss>>s1>>a>>s2>>b;
    cout<<s1+" and "+s2<<" "<<a+b<<"\n";
    // cout<<s<<"\n";
}
int main(){
    //freopen("comb.in", "r", stdin);
    int n; string a;
    cin>>n;
    map<string, int>d;
    getline(cin, a);
    for(int i=0; i<n; i++){
        getline(cin, a);
        d[a]=1;
    }
    for(auto it:d){
        print(it.first);
    }
}