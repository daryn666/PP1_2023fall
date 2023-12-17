#include <bits/stdc++.h>
using namespace std;
int main(){
    int d[7], nums[7] = {1, 2, 5, 10, 20, 50, 100};
    for(int i=0; i<7; i++) cin >> d[i];
    int n, tp;
    cin >> n;
    while(n--){
        cin >> tp;
        int cop[7];
        copy(d, d+7, cop);
        int i=6;
        while(tp>0 && i>=0){
            if(tp/nums[i] <= cop[i]){
                cop[i] -= tp/nums[i];
                tp %= nums[i];
                //cout<<"erase i="<<i<<", cop[i]="<<cop[i] <<", tp/num[i]="<< tp/nums[i]<<"\n\n";
            }
            else{
                tp -= nums[i]*cop[i];
                cop[i] = 0;
            }
            i--;
        }
        //cout<<"vec: "; for(int id:cop) cout<<id<<" "; cout<<"\n";
        if(tp==0){
            cout << "Transaction accepted!\n";
            copy(cop, cop+7, d);
        }
        else{
            cout << "Transaction stopped!\n";
        }
    }
}