//BismiLlah
#include <bits/stdc++.h>
//notmine
#define rep(i, a, n) for(int i = a; i < n; i++)

using namespace std;

int main(){
  int n;
  cin >> n;
  double cnt = 0;
  map <string, double> m;
  rep(i, 0, n) {
    string s; double x;
    cin >> s >> x;
    cnt += x, m[s] += x;
  }
  multimap <double, string> mn;
  for(map<string, double>::iterator it = m.begin(); it != m.end(); it++){
    double x = it->second * 100 / cnt;
    string s = it->first;
    mn.insert(make_pair(x, s));
  }
  multimap <double, string>::iterator it = mn.end(); it--;
  for(; ; it--){
    cout << it->second << ' ' << it->first << "%\n";
    if(it == mn.begin()) break;
  }
  return 0;
}