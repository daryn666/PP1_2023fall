#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sum_even = 0, sum_odd = 0, cnt_even = 0, cnt_odd = 0;
    
    cin >> n;
    
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            sum_even += arr[i];
            cnt_even++;
        }
        else {
            sum_odd += arr[i];
            cnt_odd++;
        }
    }
    
    cout << "Left hand magic power: " << sum_even * cnt_even << endl;
    cout << "Right hand magic power: " << sum_odd * cnt_odd << endl;
    return 0;
}