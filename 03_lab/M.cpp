#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    int n, sum = 0;
    while(ss>>n) sum += n;
    cout << sum;
}
