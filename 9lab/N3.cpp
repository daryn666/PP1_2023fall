#include <iostream>
using namespace std;

int main() {
    int i, j, k, n, count=0;
    cin >> n;
    int a[n], x[n][n];

    for(i=0; i<n; i++) {
        cin >> a[i];
    }
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            x[i][j]=a[i]^a[j];
        }
    }
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            for(k=0; k<n; k++) {
                if(x[i][j]==a[k]) {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count;
    
    return 0;
}