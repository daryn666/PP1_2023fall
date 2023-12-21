#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    pair<int, int> arr[n];
    for(int i=0; i<n; i++){
        cin >> a >> b;
        arr[i] = {a+b, i+1};
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout << arr[i].second << " ";
    }
    return 0;
}