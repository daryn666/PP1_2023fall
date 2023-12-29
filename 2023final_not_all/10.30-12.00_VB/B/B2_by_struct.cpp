#include <bits/stdc++.h>
using namespace std;
struct date{
    int d, m, y;
    void print(){
        cout<<d/10<<d%10<<" "<<m/10<<m%10<<" "<<string(3-int(log10(y)), '0')<<y<<"\n";
    }
};
bool comp(date a, date b){
    return a.y<b.y || (a.y==b.y && a.m<b.m) || (a.y==b.y && a.m==b.m && a.d<b.d);
}
int main(){
    date n;
    vector<date>d;
    while(cin>>n.d && n.d!=0 && cin>>n.m>>n.y) d.push_back(n);
    sort(d.begin(), d.end(), comp);
    for(auto i:d) i.print();
}