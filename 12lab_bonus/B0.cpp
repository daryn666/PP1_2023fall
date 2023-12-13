#include <iostream>
using namespace std;
int main(){
    int n, m, tp; cin>>n>>m; 
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }
    int k; cin>>k; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] > k){
                cout<<"Penalty!";
                return 0;
            }
        }
    }
    cout<<"No penalty for today.";
}