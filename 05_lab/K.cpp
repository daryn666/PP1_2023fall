#include <bits/stdc++.h>
using namespace std;
string vow = "aeiou";
int main()
{
    string s;
    cin >> s;
    cout << count_if(s.begin(), s.end(), [](char c){return vow.find(c)!=string::npos;});
}