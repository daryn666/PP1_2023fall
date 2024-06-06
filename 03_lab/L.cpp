#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> m;
    int arr2[m], res[n+m];
    for(int i=0; i<m; i++) cin >> arr2[i];
    for(int i=0, j=0, k=0; i<n || j<m;){
        if(j==m || (i<n && arr[i] <= arr2[j])) res[k++] = arr[i++];
        if(i==n || (j<m && arr2[j] <= arr[i])) res[k++] = arr2[j++];
    }
    for(int i=0; i<n+m; i++) cout << res[i] << ' ';
}