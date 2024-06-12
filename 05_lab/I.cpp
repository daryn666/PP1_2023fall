#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int arr[27];
    fill(arr, arr+27, 0);
    for(char c:s) arr[c-'a']++;
    for(char c:t){
        arr[c-'a']--;
        if(arr[c-'a'] < 0){
            cout << "NO";
            return 0;
        }
    }
    for(int i=0; i<27; i++){
        if(arr[i] != 0){
            cout << "NO";
            cout<<arr[i];
            return 0;
        }
    }
    cout << "YES";
    // string s, f;
    // cin >> s >> f;
    // sort(s.begin(), s.end());
    // sort(f.begin(), f.end());
    // cout << (s==f ? "YES" : "NO");
}