#include <iostream>
#include <algorithm>
using namespace std;
int fun(int n, int a[],int b[]){
    sort(a, a + n); // 1 1 2 3 4 4
    sort(b, b + n); // 1 1 3 4 4 5
    int c[1001] = {0};
    for(int i = 0;i<n;i++){
        c[a[i]]++;
    }
    int d[1001] = {0};
    for(int i = 0;i<n;i++){
        d[b[i]]++;
    }
    int cnt = 0;
    int mn[1001];
    for(int i = 0;i<1001;i++){
        cnt += min(c[i], d[i]);
    }
   
    return cnt;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    cout << fun(n, a, b);
}