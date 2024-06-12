#include <bits/stdc++.h>
using namespace std;
#define ans(bo) (bo?"YES":"NO")

int main()
{
    string s, t;
    cin >> s >> t;
    for(int i=0; i<t.size(); i+=s.size()){
        if(t.substr(i, s.size()) != s){
            cout << "NO";
            return 0;
        }
    }
    cout << ans(t.size()%s.size()==0);
}