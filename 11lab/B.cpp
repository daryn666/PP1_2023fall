#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>d(n); for(int i=0; i<n; i++)cin>>d[i];
	set<int>s(d.begin(), d.end());
	if(s.size()==d.size())cout<<"YES";
	else cout<<"NO";
}