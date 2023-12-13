#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x; 
    cin>>x;
    vector<int>arr1(x);
    for(int i=0;i<x;i++){
        cin>>arr1[i];
    } 
    sort(arr1.begin(),arr1.end());
    int y;
    cin>>y;
    vector<int>arr2(y);
    for(int i=0;i<y;i++){
        cin>>arr2[i];
        int l = 0, r=x-1;
        bool res=false;
        while(l<r){
            int sum=arr1[l]+arr1[r];
            if(sum==arr2[i]){
                res=true;
                break;  
            }else if(sum<arr2[i])l++;
            else r--;
        }
        cout<<(res?"YES":"NO")<<"\n";
    }
    return 0;
}