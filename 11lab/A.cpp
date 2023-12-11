#include <bits/stdc++.h>
using namespace std;
int main(){
	string week[8] = {"SUN", "MON", "TUE", "WED", "THU", "FRI",  "SAT", "SUN"};
	string* tp=week, t; int c=0; cin>>t;
	for(int i=0; i<8; i++){
		if(*tp==t){
			c=i;
			break;
		}
		tp++;
	}
	cout<<7-c;
}