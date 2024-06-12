#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN, row = 0, col = 0, x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> x;
            if(i==j && x > mx){
                mx = x;
                row = i+1; col = j+1;
            }
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << row << ";" << col;
}