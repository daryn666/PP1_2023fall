#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int res(string s){
    int f=s.find(' '); string frst=s.substr(0, f); s = s.substr(f+1, s.size()-f); int first = stoi(frst);
    f=s.find(' '); frst=s.substr(0, f); s = s.substr(f+1, s.size()-f); int second = stoi(frst);
    f=s.find(' '); frst=s.substr(0, f); s = s.substr(f+1, s.size()-f); int third = stoi(frst);
    frst=s.substr(0, s.size()); int fourth = stoi(frst);
    
    int a = max({first, second, third, fourth});
    
    return a;
}
int main(){
    string s;
    getline(cin,s);
    cout<<res(s);
}