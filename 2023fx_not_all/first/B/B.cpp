#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    cout << (floor(sqrt(n))==ceil(sqrt(n))?"Perfecto":"Simple");
    // cout << (int(sqrt(n))*int(sqrt(n)) == n ?"Perfecto":"Simple");
}