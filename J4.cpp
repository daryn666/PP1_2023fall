#include <bits/stdc++.h>
using namespace std;
const long long mx = 1e9;
int main(){
    int n, x;
    cin>>n;
    vector<int>d(n);
    set<int>st;
    set<int>two;
    for(int i=0; i<n; i++){
        cin>>d[i];
        int sz=st.size();
        st.insert(d[i]);
        if(sz==st.size()) two.insert(d[i]);
    }
    int m;
    cin>>m;
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());
    //cout<<"d: ";for(int i:d) cout<<i<<" "; cout<<"\n";
    for(int i=0; i<m; i++){
        cin>>x;
        if(x%2==0 && two.find(x/2)!=two.end()){
            cout<<"YES\n";
            continue;
        }
        int l=0, r= lower_bound(d.begin(), d.end(), x)-d.begin();
        bool res=false;
        //cout<<"x="<<x<<", l, r: "<<l<<" "<<r<<endl;
        while(l<r){
            int sum=d[r]+d[l];
            //cout<<"l = "<<l<<", r = "<<r<<". sum = "<<sum<<"\n";
            if(sum==x){
                res=true;
                break;
            }
            else if(sum>x) r--;
            else l++;
        }
        cout<<(res?"YES\n":"NO\n");
        
    }
}