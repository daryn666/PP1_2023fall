#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	cin>>n;
	map<int, int>mp;
	for(int i=0; i<n; i++){
		cin>>x;
		mp[x]++;
	}
	map<int, int>::iterator it=mp.begin();
	it++;
	cout<< it->second;
}
