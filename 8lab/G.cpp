#include <bits/stdc++.h>

using namespace std;
bool check(int n, vector<int> a, int id){
    if(n%id!=0 && id<=n/2){
        return check(n, a, id+1);
    }
    else if(id<=n/2 && n%id==0) return false;
    else return true;

}

int main(){
    int n, k, c=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>k;
    for(int i=0; i<n; i++){
        if(a[i]>k && check(a[i], a, 2)) c++;
    }
    cout<<c;
}