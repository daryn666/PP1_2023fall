#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    while(s.size()>1){
        if(*s.begin() != s.back()){
            cout << "NO";
            return 0;
        }
        s.erase(s.begin());
        s.pop_back();
    }
    cout << "YES";
}