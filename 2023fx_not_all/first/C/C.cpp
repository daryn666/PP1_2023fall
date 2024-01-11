#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, sum = 0;
    cin >> n;
    map<int, int>mp;
    while(n--){
        cin >> x;
        mp[x]++;
    }
    for(map<int, int>::iterator i = mp.begin(); i != mp.end(); i++){
        if( i->second == 1) sum += i->first;
    }
    cout << sum;
}