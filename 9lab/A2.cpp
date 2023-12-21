#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>vec(n*2);
    for(int i=0; i<n*2; i++)cin>>vec[i];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i*2]>vec[j*2]){
                int tp1=vec[i*2], tp2=vec[i*2+1];
                vec[i*2] = vec[j*2];
                vec[i*2+1] = vec[j*2+1];
                vec[j*2] = tp1; vec[j*2+1] = tp2;
            }
            else if(vec[i*2]==vec[j*2] && vec[i*2+1]>vec[j*2+1]){
                int tp1=vec[i*2+1];
                vec[i*2+1] = vec[j*2+1];
                vec[j*2+1] = tp1;
            }
        }
    }
    for(int i=0; i<n*2; i++){
        if(i%2==0 && i!=0) cout<<"\n";
        cout<<vec[i]<<" ";
    }
}