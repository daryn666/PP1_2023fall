#include <iostream>
#include <map>
using namespace std;
int count(string s, char c, int counter=0){
    if(s.find(c)!=string::npos) return count(s.erase(s.find(c), 1), c, counter+1);
    else return counter;
}
int main(){
    string s;
    getline(cin, s);
    int n; cin>>n;
    map<char, int>d;
    while(n--){
        char c; cin>>c;
        d[c] = count(s, c);
    }
    for(map<char, int>::iterator i=d.begin(); i!=d.end(); i++) cout<<i->first<<" "<<i->second<<"\n";
}