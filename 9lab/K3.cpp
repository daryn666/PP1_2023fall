#include <bits/stdc++.h>
//notmine
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  int ans = 0;
  for(int i = 0; i < n; i++) cin >> v[i];
  for(int i = 0; i < n; i++){
    int cnt = 0;
    for(int j = i - 1; j >= 0; j--){
      if(v[j] >= v[i])
        cnt++;
      else break;
    }
    for(int j = i; j < n; j++){
      if(v[j] >= v[i])
        cnt++;
      else break;
    }
    ans = max(ans, cnt * v[i]);
  }
  cout << ans;
    return 0;
}