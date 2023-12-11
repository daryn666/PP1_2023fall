#include <bits/stdc++.h>
using namespace std;
#define pb push_back
struct cd{
	int x;
	int y;
};
cd first;
bool comp(cd f, cd s){
	return sqrt(pow(f.x-first.x, 2) +pow(f.y-first.y, 2) ) <= sqrt(pow(s.x-first.x, 2) +pow(s.y-first.y, 2) );
}
int main(){
	// freopen("ladder.in", "r", stdin);
	// freopen("ladder.out", "w", stdout);
	cin>>first.x>>first.y;
	int n;
	cin>>n;
	vector<cd>d(n);
	for(int i=0; i<n; i++)cin>>d[i].x>>d[i].y;
	sort(d.begin(), d.end(), comp);
	for(auto it=d.begin(); it!=d.end(); it++) cout<<it->x<<" "<<it->y<<"\n";
}