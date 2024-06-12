#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, arr[10];
    cin >> s;
    for(char c:s) arr[c-'0'] += c;
    int k = 0;
    for(int i=0; i<=9; i++){
        if(arr[i].size() > 0 && k != 0 && arr[i].size() != k){
            cout << "NO";
            return 0;
        }
        else if(arr[i].size() > 0 && k == 0) k = arr[i].size();
    }
    cout << "YES" ;
}