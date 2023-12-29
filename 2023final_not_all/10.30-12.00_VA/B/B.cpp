#include <bits/stdc++.h>
//notmine
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
        cin >> arr[i][2];
    }

    map<int, string> mp;

    for (int i = 0; i < n; i++)
    {
        //cout << "hello";
        int sec = (arr[i][0] * 3600) + (arr[i][1] * 60) + arr[i][2];

        mp[sec] = to_string(arr[i][0]) + ' ' + to_string(arr[i][1]) + ' ' + to_string(arr[i][2]);
    }

    vector<string> v;
    for (const auto i : mp)
    {
        v.push_back(i.second);
    }

    cout << endl;
    
    if (s == "inc")
    {
        for (string i : v)
        {
            cout << i << endl;
        }
        return 0;
    }
    
    if (s == "dec")
    {
        int r = v.size() - 1;
        
        for (int i = r; i >= 0; i--)
        {
            cout << v[i] << endl;
        }
    }

}