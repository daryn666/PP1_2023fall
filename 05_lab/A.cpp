#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << count_if(s.begin(), s.end(), [](char c){return c>='a'&&c<='z';});
    cout << ' ';
    cout << count_if(s.begin(), s.end(), [](char c){return c>='A'&&c<='Z';});
}