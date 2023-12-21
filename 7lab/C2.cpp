#include <iostream>
using namespace std;
bool binary_search(int d[], int l, int r, int k){
    if(l>=r && d[l]!=k) return false;
    int mid = (l+r)/2;
    if(k>d[mid]) return binary_search(d, mid+1, r, k);
    else if(k<d[mid]) return binary_search(d, l, mid-1, k);
    else return true;
}
int main(){
    int n;
    cin>>n;
    int d[n]; for(int i=0; i<n; i++)cin>>d[i];
    int k; cin>>k;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(d[i]>d[j]){
                int tp=d[i]; d[i] = d[j]; d[j] = tp;
            }
        }
    }
    cout<<(binary_search(d, 0, n, k)?"Yes":"No");

    return 0;
}