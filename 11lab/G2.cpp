#include <bits/stdc++.h>
using namespace std;
#define pb push_back
struct st{
	string name;
	set<int>l;
};
bool byname(st f, st s){
	int comp = f.name.compare(s.name);
	return comp<0;
}
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n; string s; int t;
	cin>>n;
	vector<st>d;
	while(n--){
		cin>>s>>t;
		bool r=true;
		for(auto it=d.begin(); it!=d.end(); it++){
			if(it->name == s) {
				(it->l).insert(t);
				r=false; break;
			}
		}
		if(r){
			st tp; tp.name=s; tp.l.insert(t); d.pb(tp);
		}
	}
	sort(d.begin(), d.end(), byname);
	for(auto it=d.begin(); it!=d.end(); it++){
		cout<<it->name;
		if((it->l).size()>=3) cout<<" +1\n";
		else cout<<" NO BONUS\n";
	}
}