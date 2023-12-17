#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int tp, ch[1002] = {0}, mx_num=0, mx_time=0;
    for(int i=0; i<n; i++){
        cin>>tp;
        ch[tp]++;
        if(tp>mx_num)mx_num=tp;
        if(ch[tp]>mx_time)mx_time=ch[tp];
    }
    // cout<<mx_num<<" "<<mx_time<<"\n";
    for(int i=mx_num; i>=0; i--){
        if(ch[i]==mx_time) cout<<i<<" ";
    }
}