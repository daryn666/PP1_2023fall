#include <iostream>
using namespace std;
bool check(string s){
    for(int i=0; i<s.size(); i++){
    	if(s[i]!=s[s.size()-i-1]) return false;
	}
	return true;
}
bool check2(string s){
    for(int i=0; i<s.size()-1; i++){
    	if(s[i]!=s[i+1]) return false;
	}
	return true;
}
int main(){
    string s;
    cin>>s;
    bool frst=check(s), scnd=check2(s);
    cout<<(frst?(scnd?0:s.size()-1):s.size());
    if(frst){
    	if(scnd) cout<<0;
    	else cout<<s.size()-1;
	}
	else cout<<s.size();
}
