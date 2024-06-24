#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n; string s;
	cin>>n>>s; n%=27;
	for(int i=0; i<s.size(); i++){
		if(s[i]+n>90) s[i] += n-26;
		else s[i] += n;
	}
	cout<<s;
}
