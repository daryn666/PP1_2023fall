#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, mx = INT_MIN;
    string name;
    cin >> n;
    map<string, int> d;
    while(n--){
        cin >> name >> x;
        d[name] += x;
        mx = max(mx, d[name]);
    }
    for(map<string, int>::iterator i = d.begin(); i!=d.end(); i++){
        if(i->second != mx){
            cout << i->first + " has to receive " << mx - i->second << "\n";
        }
        else{
            cout << i->first + " is lucky\n";
        }
    }
}