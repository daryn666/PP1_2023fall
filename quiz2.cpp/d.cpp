#include <bits/stdc++.h>

using namespace std;

const int maximum = 1001; //just a bit larger than the largest number in the array

int main(){
    int n;
    cin >> n;
    int count[maximum] = {0};
    int arr[n];
    int cnt_max = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        count[arr[i]]++; //counts the number

        cnt_max = max(cnt_max, count[arr[i]]); //find the maximum counts
    }

    for(int i = 0; i < n; i++)
        if(count[arr[i]] == cnt_max){ //find the maximum counts of each number
            cout << arr[i];
            break;
        }
    return 0; 
}