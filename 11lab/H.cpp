#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n; string s;
	cin>>n>>s; n%=27;
	for(int i=0; i<s.size(); i++){
		if(int(s[i])+n>90){
			s[i] = char(64+((n+int(s[i]))-90));
		}
		else s[i] = char(int(s[i])+n);
	}
	cout<<s;
}