#include <bits/stdc++.h>
//notmine
#define ll long long int
using namespace std;
int main()
{
    string s;
    vector<string> i;
    while (cin>>s)
    {
        if (s == "0") break;
        i.push_back(s);
        cin>>s;
        i.back() = s + i.back();
        cin>>s;
        i.back() = s + i.back();
    }
    sort(i.begin(),i.end());
    for (string o : i)
    {
        cout<<o[6]<<o[7]<<" "<<o[4]<<o[5]<<" "<<o[0]<<o[1]<<o[2]<<o[3]<<"\n";
    }
}