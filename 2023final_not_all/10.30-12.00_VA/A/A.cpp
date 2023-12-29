#include <bits/stdc++.h>
//notmine
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);        
    }
    while(1){
        string s; cin >> s;
        if(s == "sell"){
            v.pop_back();
        }
        int add; 
        if (s == "add"){
            cin >> add;
            v.push_back(add);
        }
        if(s == "end"){
            break;
        }
    }
    int rev = v.size() - 1; //reverse
    for(int i = rev; i >= 0; i--){
        cout << v[i] << ' '; 
    }

}