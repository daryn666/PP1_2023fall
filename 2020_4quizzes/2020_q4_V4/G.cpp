#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d[n], mn=INT_MAX;
	for(int i=0; i<n; i++){
		cin>>d[i];
		if(i>=2) mn = min(mn, d[i]+d[i-1]+d[i-2]);
	}
	cout<<mn;
}
