#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int odd=0, even=0, to=0, te=0, tp;
    for(int i=0; i<n; i++){
        cin>>tp;
        if(tp%2==0){
            even+=tp; te++;
        }
        else{
            odd+=tp; to++;
        }
    }
    cout<<"Left hand magic power: "<<even*te<<"\n";
    cout<<"Right hand magic power: "<<odd*to;

}