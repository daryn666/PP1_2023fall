#include <bits/stdc++.h>
using namespace std;
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	int n, m;
	cin>>n>>m;
	vector<vector<int>>d(n, vector<int>(m));
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin>>d[i][j];
	}
	bool r=true;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<m-1; j++){
			if((d[i][j]==0 && d[i+1][j]==0 && d[i][j+1]==0 && d[i+1][j+1]==0) || (d[i][j]==1 && d[i+1][j]==1 && d[i][j+1]==1 && d[i+1][j+1]==1)){
				r=false;
				break;
			}
		}
		if(!r)break;
	}
	if(r)cout<<"YES";
	else cout<<"NO";

}