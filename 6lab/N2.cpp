#include <bits/stdc++.h>
using namespace std;

int ** array_builder(int n, int m){
    int **tp = new int * [n];
    for(int i=0; i<n; i++){
        tp[i] = new int [m];
    }
    return tp;
}

void array_destroyer(int **arr, int n){
    for(int i=0; i<n; i++) delete [] arr[i];
    delete [] arr;
}

int ** trans(int **arr, int n, int m){
    int **rev;
    rev=array_builder(m, n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            rev[i][j] = arr[j][i];
        }
    }
    return rev;
}
int main(){
    int n, m;
    cin>>n>>m;
    int ** a;
    a = array_builder(n, m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)cin>>a[i][j];
    }
    int ** b;
    b = array_builder(m, n);
    b = trans(a, n, m);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) cout<<b[i][j]<<" ";
        cout<<"\n";
    }
}