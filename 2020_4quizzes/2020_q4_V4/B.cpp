#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int n;
	cin>>n;
	s.erase(0, n);
	cout<<s;
}
