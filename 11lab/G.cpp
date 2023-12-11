#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n, tp; string s;
	cin>>n;
	map<string, set<int>>st;
	while(n--){
		cin>>s>>tp;
		st[s].insert(tp);
	}
	for(auto value:st){
		if(value.second.size()>=3) cout<<value.first<<" +1\n";
		else cout<<value.first<<" NO BONUS\n";
	}
}