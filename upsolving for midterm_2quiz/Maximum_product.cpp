#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mx1=0, mx2=0, tp;
    for(int i=0; i<n; i++){
        cin>>tp;
        if(tp>=mx1){
            mx2=mx1;
            mx1=tp;
        }
        else if(tp>mx2) mx2=tp;
    }
    cout<<mx1*mx2;
}