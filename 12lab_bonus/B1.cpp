#include <iostream>
using namespace std;
int main(){
    int n, m, z; 
    cin >> n >> m; 
    int arr[101] = {false};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> z; 
            arr[z] = true;
        }
    }
    cin >> z; 
    bool result = false;
    for(int i=z+1; i<101; i++){
        if(arr[i]){
            result = true; 
            break;
        }
    }
    cout<<(result ? "Penalty!":"No penalty for today.");
}