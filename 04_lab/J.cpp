#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            arr[i][j] += ((i+j)%2==0)?+1:-1; 
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}