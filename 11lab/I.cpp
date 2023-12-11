#include <bits/stdc++.h>
using namespace std;
#define pb push_back
bool isp(string s){
	for(int i=0; i<s.size()/2; i++){
		if(s[i]!=s[s.size()-1-i])return false;
	}
	return true;
}
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	string n;
	cin>>n; sort(n.begin(), n.end());
	bool res=false;
	do{
		if(isp(n)){
			res=true;
			break;
		}
	}while(next_permutation(n.begin(), n.end()));
	if(res) cout<<"ZA WARUDO TOKI WO TOMARE";
	else cout<<"JOJO";
}