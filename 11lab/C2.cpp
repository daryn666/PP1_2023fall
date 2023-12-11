#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define db double
struct st{
	string name;
	db sum;
};
bool solve( string s, string t ){
   int ret;
   ret = s.compare( t );
   if( ret == 0 ) {
      return true;
   } else if( ret > 0 ) {
      return true;
   } else {
      return false;
   }
}
bool comp(st f, st s){
	if(f.sum>s.sum)return true;
	else if(f.sum==s.sum)return solve(f.name, s.name);
	else return false;
}
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n; string s; db t, total=0;
	cin>>n;
	vector<st>d;
	for(int i=0; i<n; i++){
		cin>>s>>t; bool r=true;
		for(auto it=d.begin(); it!=d.end(); it++){
			if(it->name==s){
				it->sum+=t;
				r=false;
				break;
			}
		}
		if(r){
			st smth; smth.name=s; smth.sum=t;
			d.pb(smth);
		}
		total+=t;
	}
	for(auto it=d.begin(); it!=d.end(); it++){
		it->sum = it->sum/total*100.0;
	}
	sort(d.begin(), d.end(), comp);
	for(auto it=d.begin(); it!=d.end(); it++){
		cout<<it->name<<" "<<it->sum<<"%\n";
	}
}