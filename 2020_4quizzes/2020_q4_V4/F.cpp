#include <bits/stdc++.h>
using namespace std;
bool check(int d[], int m){
	for(int i=0; i<m; i++){
		if(d[i] != d[m-1-i]) return false;
	}
	return true;
}
int main(){
	int n, m;
	cin>>n>>m;
	int d[m];
	bool res=true;
	for(int i=0; i<n; i++){
		for(int i=0; i<m; i++) cin>>d[i];
		if((i==0 || i==n-1) && !check(d, m)) res=false;
	}
	cout<<(res?"YES":"NO");
}
