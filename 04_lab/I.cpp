#include <bits/stdc++.h>
using namespace std;
#define check(z) (floor(sqrt(z)) == ceil(sqrt(z)))
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(check(arr[i][j])) arr[i][j] = sqrt(arr[i][j]); 
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}