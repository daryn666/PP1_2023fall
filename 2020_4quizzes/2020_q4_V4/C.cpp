#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, n;
	cin>>k>>n;
	int d[n];
	for(int i=0; i<n; i++){
		cin>>d[i];
		if(i>0) k-=abs(d[i]-d[i-1]);
	}
	cout<<(k>=0?"YES":"NO");
}
