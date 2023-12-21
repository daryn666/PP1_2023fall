#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
  map<string,int> m;
  int n,c=0;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
  }
  map<string,int>::iterator it=m.begin();
  while(it!=m.end()){
    if(it->second==3) c++;
    it++;
  }
  cout<<c;
}