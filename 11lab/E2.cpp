#include <bits/stdc++.h>
using namespace std;
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n;
	cin>>n; 
	string s;
	cin>>s;
	vector<char>st; vector<char>in(27, 0);
	for(int i=0; i<s.size(); i++){
		if(!in[int(s[i])-97]){
			st.push_back(s[i]);
			in[int(s[i])-97] = true;
		}
	}
	// for(char i:st)cout<<i<<" "; 

	for(int x=1; x<n; x++){
		cin>>s;
		for(int id=0; id<st.size(); id++){
			bool r=false;
			for(int i=0; i<s.size(); i++){
				if(s[i]==st[id]){
					r=true;
					break;
				}
			}
			if(!r) {st.erase(st.begin()+id); id=-1;}
		}
	}
	if(st.size()>0){
		sort(st.begin(), st.end());
		for(char i:st) cout<<i<<" ";
	}
	else cout<<"NO COMMON CHARACTERS";

}