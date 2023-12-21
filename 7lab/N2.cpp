#include <iostream>
using namespace std;
bool res(int d[], int n, int k, int count=0){
    if(n==0 && count<2) return true;
    if(count>=2) return false;
    if(d[n]-d[n-1]<=k) count++;
    return res(d, n-1, k, count);
}
int main(){
    int n, k;
    cin>>n>>k;
    int d[n+1]; for(int i=0; i<n; i++)cin>>d[i];
    d[n] = 0; 
    for(int i=0; i<n+1; i++){
        for(int j=i+1; j<n+1; j++){
            if(d[i]>d[j]){
                int tp = d[i]; d[i] = d[j]; d[j] = tp;
            }
        }
    }
    // for(int i=0; i<n+1; i++) cout<<d[i]<<" "; cout<<"\n";
    cout<<(res(d, n, k)?"no":"cheater");
    
}