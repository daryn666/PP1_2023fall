#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void trans( int n, int m, int **arr){
    for(int i=0; i<m; i++){
        for(int j=0; j<n ;j++) cout<<arr[j][i]<<" ";
        cout<<"\n";
    }
    
}
int main() {
    int n, m;
    cin>>n>>m; int** arr = new int*[n]; for(int i=0; i<n; i++) arr[i]=new int[m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>arr[i][j];
    }
    trans(n, m, arr );
}