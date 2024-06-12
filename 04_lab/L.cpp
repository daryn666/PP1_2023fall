#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin >> arr[i][j];
    }
    long long sum = 0;
    cout << "coordinates of min elements:\n";
    for(int j=0; j<m; j++){
        int mn = INT_MAX, id = 0;
        for(int i=0; i<n; i++){
            if(arr[i][j] < mn){
                mn = arr[i][j];
                id = i;
            }
        }
        sum += mn;
        cout << id+1 << ";" << j+1 << '\n';
    }
    cout<<"\nTheir sum:\n"<<sum;
}