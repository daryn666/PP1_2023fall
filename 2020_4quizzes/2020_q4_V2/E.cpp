#include <bits/stdc++.h>
using namespace std;
#define pb push_back
struct date{
    int day, month, year;
};
bool mine(date f, date s){
    return f.year<s.year || (f.year==s.year && f.month<s.month) || (f.year==s.year && f.month==s.month && f.day<s.day);
}

int main(){
    int n;
    cin>>n;
    vector<date>d;
    string s;
    stringstream ss;
    for(int i=0; i<n; i++){
        cin>>s;
        ss.clear();
        ss<<s;
        date f;
        char c;
        ss>>f.day>>c>>f.month>>c>>f.year;
        d.pb(f);
    }
    sort(d.begin(), d.end(), mine);
    for(auto i:d){
        if(i.day<10) cout<<0;
        cout<<i.day<<'-';
        if(i.month<10) cout<<0;
        cout<<i.month<<'-'<<i.year<<"\n";
    }
}