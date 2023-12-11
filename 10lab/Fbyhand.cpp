/*BismiLlah*/
#include <bits/stdc++.h>
//notmine
using namespace std;

int main(){
  double u = 0.0;
  double d = 0.0;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    double a1, a2, f, c;
    cin >> a1 >> a2 >> f >> c;
    d += c;
    if(a1 + a2 >= 30 and f >= 20) {
      double x = a1 + a2 + f;
      if(x >= 50 and x <= 54) u += 1.0 * c;
      else if(x >= 55 and x <= 59) u += (1.0 + 1.0/3.0) * c;
      else if(x >= 60 and x <= 64) u += (1.0 + 2.0/3.0) * c;
      else if(x >= 65 and x <= 69) u += 2.0 * c;
      else if(x >= 70 and x <= 74) u += (2.0 + 1.0/3.0) * c;
      else if(x >= 75 and x <= 79) u += (2.0 + 2.0/3.0) * c;
      else if(x >= 80 and x <= 84) u += 3.0 * c;
      else if(x >= 85 and x <= 89) u += (3.0 + 1.0/3.0) * c;
      else if(x >= 90 and x <= 94) u += (3.0 + 2.0/3.0) * c;
      else u += 4.0 * c;
    }
  }
  double res = u / d;
  cout << res;
  return 0;
}