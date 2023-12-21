#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, sum=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    set<int> s(a.begin(), a.end());
    set<int>del;
    for(int i:s){
        if(i%2==0){
            del.insert(i);
        }
    }
    for(int i:del) s.erase(i);
    for(int i:s)cout<<i<<" ";
}