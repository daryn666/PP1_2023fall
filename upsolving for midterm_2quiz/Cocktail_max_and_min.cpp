#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int d[n*m];
    for(int i=0; i<n*m; i++){
        cin>>d[i];
    }
    // sort(d, d+m*n);
    for(int i=0; i<n*m; i++){
        for(int j=i+1; j<n*m; j++){
            if(d[i]>d[j]){
                int tp = d[i]; d[i] = d[j]; d[j] = tp;
            }
        }
    }
    int left=0, right = m*n-1, k=0;
    int a[n][m], c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        	if(c%2==0){
        		a[i][j] = d[right--];
        		c++;
			}
            else{
            	a[i][j] = d[left++];
            	c++;
			}
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
