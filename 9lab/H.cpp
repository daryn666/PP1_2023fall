#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>q(n);
    for(int i=0; i<n; i++){
        cin>>q[i];
    }
     set<string>s(q.begin(), q.end());
     for(auto str:s){
        for(int i=0;i<q.size(); i++){
            if(q[i]==str){
                cout<<str<<" "<<i+1<<"\n";
                break;
            }
        }
     }

    return 0;
}