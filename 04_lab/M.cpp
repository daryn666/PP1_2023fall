#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n][n], c = 1;
    for(int i=0; i<n; i++) fill(arr[i], arr[i]+n, 0);
    int i=0, j=0;
    while(c <= n*n){
        while(j<n && arr[i][j]==0) arr[i][j++] = c++;
        j--; i++;
        while(i<n && arr[i][j]==0) arr[i++][j] = c++;
        i--; j--;
        while(j>=0 && arr[i][j]==0) arr[i][j--] = c++;
        j++; i--;
        while(i>=0 && arr[i][j]==0) arr[i--][j] = c++;
        i++; j++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout << arr[i][j] << ' ';
        cout << '\n';
    }
}