#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  int sum = 0;
  cin >> a;
  int z;
  z = (a+1)*a/2;
  vector <int> v(z);
  for(int i = 1; i <= a; i++) {
    fill(v.begin() + sum, v.begin() + sum + i, i);
    sum+=i;
  }
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}