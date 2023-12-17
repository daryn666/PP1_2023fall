#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x; 
    string s1, s2, mark;
    cin >> n;
    map<string, double> marks = {{"A+", 4.00}, {"A", 3.75}, {"B+", 3.50}, {"B", 3.00}, {"C+", 2.50}, {"C", 2.00}, {"D+", 1.50}, {"D", 1.00}, {"F", 0.00}};
    vector<pair<double, string>>d;
    for(int i=0; i<n; i++){
        cin>>s1>>s2>>x;
        double cr=0, total=0, tp;
        while(x--){
            cin>>mark>>tp;
            total += marks[mark]*tp;
            cr+=tp;
        }
        d.push_back({total/cr, s1+' '+s2});
    }
    sort(d.begin(), d.end());
    // maybe for(auto i:d) cout<<i.second<<" "<<i.first<<"\n";
    for(auto i:d) cout<<i.second<<" "<<fixed<<setprecision(3)<<i.first<<"\n";
}
// 5
// Issenbayev Yernur 4 A 4 D+ 2 B 3 A+ 4
// Yermekbayeva Diana 3 A+ 4 B+ 3 B 1
// Kadyrov Asman 2 A+ 4 A+ 4
// Stepanenko Ivan 3 C+ 3 F 1 A+ 5
// Bissimbayev Arystan 3 A+ 4 A+ 5 D 1