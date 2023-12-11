#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> v;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(!count(v.begin(), v.end(), x)) v.push_back(x);
        //also if(find(v.begin(), v.end(), x) == v.end()) v.push_back(x);
    }

    do{
        for(auto & i: v){
            cout << i << ' ';
        }
        cout << endl;
    }
    while(next_permutation(v.begin(), v.end()));
}